/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:33:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 18:16:24 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main() {
	Sample	instance;

	std::cout << instance.getFoo() << std::endl;
	instance.setFoo(42);
	std::cout << instance.getFoo() << std::endl;
	instance.setFoo(1337);
	std::cout << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << instance.getFoo() << std::endl;

	return (0);
}
