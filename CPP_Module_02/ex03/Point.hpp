/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:49:34 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 19:12:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point( const Fixed x, const Fixed y );
		Point( const Point& origine );
		Point&	operator=( const Point& origine );
		~Point();

		float	getx() const;
		float	gety() const;

	private:
		Fixed	x;
		Fixed	y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif