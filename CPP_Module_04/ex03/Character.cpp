/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:10:17 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/02 21:01:13 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>


Character::Character( std::string const& name ) : name(name)
{
	index = 0;
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    //std::cout << "Character constructor called!" << std::endl;
}

Character::Character( const Character& other )
{
	*this = other;
    //std::cout << "Character copy constructor called!" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
        delete inventory[i];
        inventory[i] = NULL;
    }
    //std::cout << "Character destructor called!" << std::endl;
}

Character&	Character::operator=( const Character& other )
{
    if (this != &other) {
        name = other.name;
        index = other.index;
        // clear inventory
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
            inventory[i] = NULL;
        }
        // copy inventory
        for (int i = 0; i < 4; i++) {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
        }
    }
    //std::cout << "Character copy assignment operator called!" << std::endl;
    return (*this);
}

void	Character::equip(AMateria* m)
{
	if (index >= 4 || !m)
        return ;
    inventory[index++] = m;
}

void	Character::unequip(int idx)
{
	if (0 > idx || idx >= index)
        return ;
    inventory[idx] = NULL;
    for (int i = idx + 1; i < 4; i++) {
        inventory[i - 1] = inventory[i];
    }
    inventory[3] = NULL;
    index--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 > idx || idx >= index)
        return ;
    inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
    return (name);
}