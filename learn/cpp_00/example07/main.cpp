/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:33:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 18:26:45 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main() {
	Sample	instance1;
	Sample	instance2;
	Sample	instance3;
	Sample	instance4;

	instance1.setFoo(5);
	instance2.setFoo(2);
	instance3.setFoo(5);
	instance4.setFoo(7);

	std::cout << "instance1._foo vs instance2._foo : " << instance1.compare(&instance2) << std::endl;
	std::cout << "instance1._foo vs instance3._foo : " << instance1.compare(&instance3) << std::endl;
	std::cout << "instance1._foo vs instance4._foo : " << instance1.compare(&instance4) << std::endl;

	return (0);
}
