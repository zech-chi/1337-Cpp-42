/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:55:32 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 19:18:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{

}

Point::Point( const Fixed x, const Fixed y ): x(x), y(y)
{

}

Point::Point( const Point& origine )
{
	*this = origine;
}

Point&	Point::operator=( const Point& origine )
{
	if (this != &origine)
	{
		this->x = origine.x;
		this->y = origine.y;
	}
	return (*this);
}

Point::~Point()
{
	
}

float	Point::getx() const
{
	return (x.toFloat());
}

float	Point::gety() const
{
	return (y.toFloat());
}
