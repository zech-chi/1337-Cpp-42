/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 16:38:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int d )
{
	std::cout << "Int constructor called" << std::endl;
	_val = d << _bits;
}

Fixed::Fixed( const float f )
{
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(f * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

void	Fixed::setRawBits( int const raw )
{
	_val = raw;
}

float	Fixed::toFloat( void ) const
{
	return (((float)_val) / 256);
}

int		Fixed::toInt( void ) const
{
	return (_val >> _bits);
}

std::ostream& operator << (std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return (out);
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
