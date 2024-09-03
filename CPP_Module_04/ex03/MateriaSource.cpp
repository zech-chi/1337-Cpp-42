/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:39:03 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 15:29:12 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <cstddef>
#include <iostream>

MateriaSource::MateriaSource()
{
	index = 0;
    for (int i = 0; i < 4; i++) {
        store[i] = NULL;
    }
    //std::cout << "MateriaSource constructor called!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
    //std::cout << "MateriaSource copy constructor called!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
        delete store[i];
        store[i] = NULL;
    }
    //std::cout << "MateriaSource destructor called!" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other) {
        index = other.index;
        // clear store
        for (int i = 0; i < 4; i++) {
            delete store[i];
            store[i] = NULL;
        }
        // copy store
        for (int i = 0; i < 4; i++) {
            if (other.store[i])
                store[i] = other.store[i]->clone();
        }
    }
    //std::cout << "MateriaSource copy assignment operator called!" << std::endl;
    return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
    if (index == 4) {
        delete materia;
        materia = NULL;
        return ;
    }
    store[index++] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++) {
        if (store[i] && store[i]->getType() == type)
            return (store[i]->clone());
    }
    return (0);
}

// void    MateriaSource::print()
// {
//     std::cout << "---------->store of Materia Source<---------\n";  
//     for (int i = 0; i < 4; i++) {
//         std::cout << i << ": ";
//         if (store[i])
//             std::cout << store[i]->getType();
//         else
//             std::cout << "NaN";
//         std::cout << std::endl;
//     }
//      std::cout << "-------------------------------------------\n";
// }