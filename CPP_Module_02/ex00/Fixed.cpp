/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/22 11:12:10 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

/* Default constructor */
Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* _val getter */
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

/* _val setter */
void	Fixed::setRawBits( int const raw )
{
	_val = raw;
}

/* The copy constructor initializes a new object using an existing object. */
Fixed::Fixed( const Fixed& origine)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origine;
}

/*
	The copy assignment operator assigns the values from one 
	existing object to another existing object, 
	checking for self-assignment to avoid unnecessary work.
*/
Fixed& Fixed::operator=( const Fixed& origine)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origine)
		_val = origine.getRawBits();
	return (*this);
}
