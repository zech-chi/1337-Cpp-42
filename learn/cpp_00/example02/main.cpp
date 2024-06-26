/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:33:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 11:44:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main() {
	Sample	instance;

	instance.foo = 1337;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();

	return (0);
}
