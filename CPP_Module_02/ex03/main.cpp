/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:19 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/22 14:43:43 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point	a(Fixed(0), Fixed(3.71f));
	Point	b(Fixed(0), Fixed(1.15f));
	Point	c(Fixed(-0.28f), Fixed(2.91f));
	Point	p(Fixed(0), Fixed(3.06f));

	std::cout << bsp(a, b, c, p) << std::endl;

	return 0;
}
