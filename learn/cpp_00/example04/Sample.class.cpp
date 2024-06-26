/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:29:15 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:41:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// Sample::Sample(char new_a, int new_b, float new_c) {
// 	std::cout << "Constructor called" << std::endl;
// 	this->a = new_a;
// 	this->b = new_b;
// 	thic->c = new_c;
// }
Sample::Sample(char new_a, int new_b, float new_c) : a(new_a), b(new_b), c(new_c) {
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::print(void) {
	std::cout << "a = " << this->a << std::endl;
	std::cout << "b = " << this->b << std::endl;
	std::cout << "c = " << this->c << std::endl;
}
