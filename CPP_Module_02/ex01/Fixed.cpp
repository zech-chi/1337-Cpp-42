/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/22 12:10:41 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

/* Default constructor */
Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Parameterized Constructor for int */
Fixed::Fixed( const int d )
{
	std::cout << "Int constructor called" << std::endl;
	_val = d << _bits;
}

/* Parameterized Constructor for float */
Fixed::Fixed( const float f )
{
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(f * (1 << _bits));
}

/* Destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* _val getter */
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

/* _val setter */
void	Fixed::setRawBits( int const raw )
{
	_val = raw;
}

/* converts the fixed-point value to a floating-point value. */
float	Fixed::toFloat( void ) const
{
	return (((float)_val) / (float)((1 << _bits)));
}

/* converts the fixed-point value to an integer value. */
int		Fixed::toInt( void ) const
{
	return (_val >> _bits);
}

/*
	Purpose:
		The purpose of this function is to allow objects of the Fixed class 
		to be inserted into output streams (like std::cout) using the << operator.
		This is useful for easily printing the values of Fixed objects.

	Return Type: std::ostream&
		The function returns a reference to an std::ostream object.
		This allows for chaining of the << operator (e.g., std::cout << a << b).

	Parameters:
		std::ostream& out: A reference to the output stream where the data will be inserted.
		const Fixed& f: A constant reference to the Fixed object to be inserted into the stream.
*/
std::ostream& operator << (std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return (out);
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
