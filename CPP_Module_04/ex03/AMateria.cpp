/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:18:06 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/02 20:56:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>


AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
	// std::cout << "AMateria copy constructor called!" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called!" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	// std::cout << "AMateria copy assignment operator called!" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	AMateria::use(ICharacter& target)
{
	(void)(target);
}

std::string const & AMateria::getType() const
{
	return (type);
}
