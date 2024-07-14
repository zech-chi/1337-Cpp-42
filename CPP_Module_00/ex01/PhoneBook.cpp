/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:45:14 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/14 16:57:08 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_index = 0;
	_size = 0;
}

PhoneBook::~PhoneBook(void)
{
}

std::string	getPrompt(std::string message, std::string color)
{
	std::string prompt;

	std::cout << color << message << RESET;
	if (!std::getline(std::cin, prompt))
	{
		std::cout << std::endl;
		exit(1);
	}
	return (prompt);
}

void	PhoneBook::getPrompts(void)
{
	std::string prompt;

	std::cout << "Valid Prompts: ADD, SEARCH and EXIT" << std::endl;
	while (true)
	{
		prompt = getPrompt("prompt_> ", YELLOW);
		if (!prompt.compare("ADD"))
			add();
		else if (!prompt.compare("SEARCH"))
			search();
		else if (!prompt.compare("EXIT"))
			break ;
		else
			std::cerr << RED << "invalid prompt" << RESET << std::endl;
	}
}

void	PhoneBook::add(void)
{
	Contact	newContact;

	std::string prompt;
	prompt = getPrompt("What's your first name? : ", ORANGE);
	while (!newContact.setFirstName(prompt))
	{
		std::cerr << "Invalid first name. Try again!!!" << std::endl;
		prompt = getPrompt("What's your first name? : ", ORANGE);
	}
	prompt = getPrompt("What's your last name? : ", ORANGE);
	while (!newContact.setLastName(prompt))
	{
		std::cerr << "Invalid last name. Try again!!!" << std::endl;
		prompt = getPrompt("What's your last name? : ", ORANGE);
	}
	prompt = getPrompt("What's your nickname? : ", ORANGE);
	while (!newContact.setNickName(prompt))
	{
		std::cerr << "Invalid nickname. Try again!!!" << std::endl;
		prompt = getPrompt("What's your nickname? : ", ORANGE);
	}
	prompt = getPrompt("What's your phone number? : ", ORANGE);
	while (!newContact.setPhoneNumber(prompt))
	{
		std::cerr << "Invalid phone number. Try again!!!" << std::endl;
		prompt = getPrompt("What's your phone number? : ", ORANGE);
	}
	prompt = getPrompt("What's your darkest secret? : ", ORANGE);
	while (!newContact.setDarkestSecret(prompt))
	{
		std::cerr << "Invalid darkest secret. Try again!!!" << std::endl;
		prompt = getPrompt("What's your darkest secret? : ", ORANGE);
	}
	_contacts[_index] = newContact;
	_index = (_index + 1) % 8;
	if (_size < 8)
		_size++;
	std::cout << "index: " << static_cast<int>(_index) << ", size: " << static_cast<int>(_size) << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	prompt;
	uint8_t		index;

	/* Display index, first name, last name and nickname */
	std::cout << PURPLE;
	
	std::cout << RESET;
	for (uint8_t i = 0; i < _size; i++)
	{
		std::cout << "| {" << static_cast<int>(i) << "} | {" << _contacts[i].getFirstName() \
		<< "} | {" << _contacts[i].getLastName() << "} | {" << _contacts[i].getNickName() << "} |" << std::endl;
	}

	/* Ask for index of the entry to display */
	prompt = getPrompt("Enter an index to search: ", ORANGE);

	if (prompt.empty() || prompt.length() > 1 || !isdigit(prompt.at(0)))
		std::cerr << RED << "invalid index. Must be between 0 to 7" << RESET << std::endl;
	else
	{
		index = prompt.at(0) - 48;
		if (index < 8 && index < _size)
		{
			std::cout << PURPLE << "first name    : " << RESET << _contacts[index].getFirstName() << std::endl;
			std::cout << PURPLE << "last name     : " << RESET << _contacts[index].getLastName() << std::endl;
			std::cout << PURPLE << "nickname      : " << RESET << _contacts[index].getNickName() << std::endl;
			std::cout << PURPLE << "phone number  : " << RESET << _contacts[index].getPhoneNumber() << std::endl;
			std::cout << PURPLE << "darkest secret: " << RESET << _contacts[index].getFirstName() << std::endl;
		}
		else if (index < 8)
			std::cerr << RED "Index " << static_cast<int>(index) << " does not have any contact yet." << RESET << std::endl;
		else
			std::cerr << RED << "invalid index. Must be between 0 to 7" << RESET << std::endl;
	}
}
 ---------- ---------- ---------- ---------- 
|          |          |          |          |