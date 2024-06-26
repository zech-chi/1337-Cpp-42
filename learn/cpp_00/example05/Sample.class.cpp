/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:29:15 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 15:23:42 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	this->publicFoo = 0;
	this->_privateFoo = 0;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::_privateBar(void) const {
	std::cout << "_privateFoo: " << this->_privateFoo << std::endl;
}

void	Sample::publicBar(void) const {
	std::cout << "publicFoo: " << this->publicFoo << std::endl;
	this->_privateBar();
}
