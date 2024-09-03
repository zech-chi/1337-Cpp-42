/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:06:07 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 14:45:51 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default WrongCat (Derived class) constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& origine ) : WrongAnimal(origine)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& origine )
{
	if (this != &origine)
		WrongAnimal::operator=(origine);
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat (Derived class) called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "I am Wrong cat but, mmeoww, mmeoww" << std::endl;
}
