/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:19 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/21 20:10:27 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Fixed xa(0), ya(3.71f);
	Fixed xb(0), yb(1.15f);
	Fixed xc(-0.28f), yc(2.91f);
	Fixed xp(0), yp(3.06f);

	Point	a(xa, ya);
	Point	b(xb, yb);
	Point	c(xc, yc);
	Point	p(xp, yp);
	
	std::cout << bsp(a, b, c, p) << std::endl;

	return 0;
}
