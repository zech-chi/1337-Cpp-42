/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:55:40 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 20:11:14 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	calculateAire( Point const a, Point const b, Point const c )
{
	float	aire;

	aire = 0.5 * abs(
		a.getx() * (b.gety() - c.gety())
		+ b.getx() * (c.gety() - a.gety())
		+ c.getx() * (a.gety() - b.gety())
	);
	return (aire);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float aire_a_b_c = calculateAire(a, b, c);
	float aire_a_b_point = calculateAire(a, b, point);
	float aire_a_c_point = calculateAire(a, c, point);
	float aire_b_c_point = calculateAire(b, c, point);

	std::cout << "aire_a_b_c = " << aire_a_b_c << std::endl;
	std::cout << "aire_a_b_point = " << aire_a_b_point << std::endl;
	std::cout << "aire_a_c_point = " << aire_a_c_point << std::endl;
	std::cout << "aire_b_c_point = " << aire_b_c_point << std::endl;
	if (!aire_a_b_c || !aire_a_b_point || !aire_a_c_point || !aire_b_c_point)
		return (false);
	return (aire_a_b_point + aire_a_c_point + aire_b_c_point == aire_a_b_c);
}
