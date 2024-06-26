/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:29:15 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:13:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(void) {
	std::cout << "Member function bar called" << std::endl;
}
