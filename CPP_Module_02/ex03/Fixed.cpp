/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 18:18:02 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _val(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int d )
{
	// std::cout << "Int constructor called" << std::endl;
	_val = d << _bits;
}

Fixed::Fixed( const float f )
{
	// std::cout << "Float constructor called" << std::endl;
	_val = roundf(f * 256);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
	// std::cout << "Copy constructor called" << std::endl;
	*this = origine;
}

Fixed& Fixed::operator=( const Fixed& origine)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origine)
		_val = origine.getRawBits();
	return (*this);
}

bool	Fixed::operator>( const Fixed& other ) const
{
	return (this->_val > other._val);
}

bool	Fixed::operator<( const Fixed& other ) const
{
	return (this->_val < other._val);
}

bool	Fixed::operator>=( const Fixed& other ) const
{
	return (this->_val >= other._val);
}

bool	Fixed::operator<=( const Fixed& other ) const
{
	return (this->_val <= other._val);
}

bool	Fixed::operator==( const Fixed& other ) const
{
	return (this->_val == other._val);
}

bool	Fixed::operator!=( const Fixed& other ) const
{
	return (this->_val != other._val);
}

Fixed	Fixed::operator+( const Fixed& other ) const
{
	Fixed	res;

	res.setRawBits(this->_val + other._val);
	return (res);
}

Fixed	Fixed::operator-( const Fixed& other ) const
{
	Fixed	res;

	res.setRawBits(this->_val - other._val);
	return (res);
}

Fixed	Fixed::operator*( const Fixed& other ) const
{
	Fixed	res;

	res.setRawBits((this->_val * other._val) >> _bits);
	return (res);
}

Fixed	Fixed::operator/( const Fixed& other ) const
{
	Fixed	res;

	res.setRawBits((this->_val << _bits) / other._val);
	return (res);
}

Fixed&	Fixed::operator++()
{
	(this->_val)++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	++(this->_val);
	return (old);
}

Fixed&	Fixed::operator--()
{
	(this->_val)--;
	return (*this);
}


Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	--(this->_val);
	return (old);
}

Fixed&	Fixed::min( Fixed& f1, Fixed& f2)
{
	if (f1._val > f2._val)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::min( const Fixed& f1, const Fixed& f2)
{
	if (f1._val > f2._val)
		return (f2);
	return (f1);
}

Fixed&	Fixed::max( Fixed& f1, Fixed& f2)
{
	if (f1._val < f2._val)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::max( const Fixed& f1, const Fixed& f2)
{
	if (f1._val < f2._val)
		return (f2);
	return (f1);
}
