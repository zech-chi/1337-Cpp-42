/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:45:47 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/15 17:30:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int ac, char **av)
{
	PhoneBook	PhoneBookStore;
	(void)av;

	if (ac != 1)
	{
		std::cerr << RED << "The Program doesn't accepte any arguments!" << RESET << std::endl;
		return (1);
	}
	PhoneBookStore.getPrompts();
	return (0);
}
