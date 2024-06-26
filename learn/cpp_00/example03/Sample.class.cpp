/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:29:15 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:57:19 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(1337) {
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(void) const{
	std::cout << "pi = " << this->pi << std::endl;
	std::cout << "qd = " << this->qd << std::endl;
	// this->qd = 42;
}
