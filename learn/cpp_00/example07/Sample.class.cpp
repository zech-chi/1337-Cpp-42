/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:29:15 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 18:23:13 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	this->_foo = -1;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::setFoo(int newFoo) {
	if (newFoo >= 0) this->_foo = newFoo;
	else std::cerr << "invalid value!" << std::endl;
}

int	Sample::getFoo(void) const {
	return (this->_foo);
}

int	Sample::compare(Sample *other) const {
	if (this->_foo < other->_foo)
		return -1;
	else if (this->_foo > other->_foo)
		return 1;
	return (0);
}
