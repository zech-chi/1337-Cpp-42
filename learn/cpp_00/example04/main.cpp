/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:33:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:41:58 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main() {
	Sample	instance1('a', 1337, 1.618f);
	instance1.print();
	std::cout << std::endl;
	Sample	instance2('b', 42, 3.14f);
	instance2.print();

	return (0);
}
