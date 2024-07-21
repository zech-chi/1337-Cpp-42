/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/20 18:24:40 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

void	Fixed::setRawBits( int const raw )
{
	_val = raw;
}

Fixed::Fixed( const Fixed& origine)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origine;
}

Fixed& Fixed::operator=( const Fixed& origine)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origine)
		_val = origine.getRawBits();
	return (*this);
}
