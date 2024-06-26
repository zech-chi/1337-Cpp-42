/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 22:13:35 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/25 22:13:38 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	g_var = 0;
int f(void) { return 1; }

namespace Foo {
	int g_var = 1;
	int f(void) { return 2; }
}

namespace Bar {
	int g_var = 2;
	int f(void) { return 3; }
}

namespace Muf = Bar;

int	main(void) {
	std::cout << "g_var: " << g_var << std::endl;
	std::cout << "f(): " << f() << std::endl;
	std::cout << "Foo::g_var: " << Foo::g_var << std::endl;
	std::cout << "Foo::f(): " << Foo::f() << std::endl;
	std::cout << "Bar::g_var: " << Bar::g_var << std::endl;
	std::cout << "Bar::f(): " << Bar::f() << std::endl;
	std::cout << "Muf::g_var: " << Muf::g_var << std::endl;
	std::cout << "Muf::f(): " << Muf::f() << std::endl;
}
