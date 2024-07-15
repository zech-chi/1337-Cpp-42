/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:45:14 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/15 09:22:44 by zech-chi         ###   ########.fr       */
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
		std::cerr << RED << "Invalid first name. Try again!!!" << RESET << std::endl;
		prompt = getPrompt("What's your first name? : ", ORANGE);
	}
	prompt = getPrompt("What's your last name? : ", ORANGE);
	while (!newContact.setLastName(prompt))
	{
		std::cerr << RED << "Invalid last name. Try again!!!" << RESET << std::endl;
		prompt = getPrompt("What's your last name? : ", ORANGE);
	}
	prompt = getPrompt("What's your nickname? : ", ORANGE);
	while (!newContact.setNickName(prompt))
	{
		std::cerr << RED << "Invalid nickname. Try again!!!" << RESET << std::endl;
		prompt = getPrompt("What's your nickname? : ", ORANGE);
	}
	prompt = getPrompt("What's your phone number? : ", ORANGE);
	while (!newContact.setPhoneNumber(prompt))
	{
		std::cerr << RED << "Invalid phone number. Try again!!!" << RESET << std::endl;
		prompt = getPrompt("What's your phone number? : ", ORANGE);
	}
	prompt = getPrompt("What's your darkest secret? : ", ORANGE);
	while (!newContact.setDarkestSecret(prompt))
	{
		std::cerr << RED << "Invalid darkest secret. Try again!!!" << RESET << std::endl;
		prompt = getPrompt("What's your darkest secret? : ", ORANGE);
	}
	_contacts[_index] = newContact;
	_index = (_index + 1) % 8;
	if (_size < 8)
		_size++;
	std::cout << "index: " << static_cast<int>(_index) << ", size: " << static_cast<int>(_size) << std::endl;
}

void	desplayBoundary(void)
{
	std::cout << PURPLE;
	for (uint8_t i = 0; i < 4; i++)
	{
		if (i == 0)
			std::cout << "+";
		std::cout << "------------+";
		if (i == 3)
			std::cout << std::endl;
	}
	std::cout << RESET;
}

void	desplayRight(std::string txt, uint8_t width)
{
	uint8_t	len;
	uint8_t	left;
	uint8_t	right;

	len = txt.length();
	right = 1;
	left = width - len - right;
	std::cout << std:: setw(left) << "" << txt << std::setw(right) << "";
}

void	desplayContent(std::string txt)
{
	if (txt.length() <= 10)
		desplayRight(txt, 12);
	else 
	{
		std::cout << " ";
		for (int i = 0; i < 9; i++)
			std::cout << txt.at(i);
		std::cout << ". ";
	}
}

void	desplayPipe(void)
{
	std::cout << PURPLE;
	std::cout << "|";
	std::cout << RESET;
}

bool	isValidIndex(std::string index)
{
	int	i;

	if (index.empty())
		return (false);
	for (size_t i = 0; i < index.length(); i++)
	{
		if (!std::isdigit(index.at(i)))
			return (false);
	}
	i = 0;
	for (size_t j = 0; j < index.length(); j++)
	{
		i = i * 10 + index.at(j) - '0';
		if (i >= 8)
			return (false);
	}
	return (true);
}

void	PhoneBook::search(void)
{
	std::string	prompt;
	uint8_t		index;

	/* Display index, first name, last name and nickname */
	desplayBoundary();
	std::cout << PURPLE;
	std::cout << "|";
	desplayRight("index", 12);
	std::cout << "|";
	desplayRight("first name", 12);
	std::cout << "|";
	desplayRight("last name", 12);
	std::cout << "|";
	desplayRight("nickname", 12);
	std::cout << "|" << std::endl;
	std::cout << RESET;
	for (uint8_t i = 0; i < _size; i++)
	{
		desplayBoundary();
		desplayPipe();
		desplayContent(std::to_string(i));
		desplayPipe();
		desplayContent(_contacts[i].getFirstName());
		desplayPipe();
		desplayContent(_contacts[i].getLastName());
		desplayPipe();
		desplayContent(_contacts[i].getNickName());
		desplayPipe();
		std::cout << std::endl;
	}
	desplayBoundary();
	/* Ask for index of the entry to display */
	prompt = getPrompt("Enter an index to search: ", ORANGE);
	if (!isValidIndex(prompt))
		std::cerr << RED << "invalid index. Must be between 0 to 7" << RESET << std::endl;
	else
	{
		index = 0;
		for (size_t i = 0; i < prompt.length(); i++)
			index = index * 10 + prompt.at(i) - 48;
		if (index < 8 && index < _size)
		{
			std::cout << PURPLE << "first name    : " << RESET << _contacts[index].getFirstName() << std::endl;
			std::cout << PURPLE << "last name     : " << RESET << _contacts[index].getLastName() << std::endl;
			std::cout << PURPLE << "nickname      : " << RESET << _contacts[index].getNickName() << std::endl;
			std::cout << PURPLE << "phone number  : " << RESET << _contacts[index].getPhoneNumber() << std::endl;
			std::cout << PURPLE << "darkest secret: " << RESET << _contacts[index].getDarkestSecret() << std::endl;
		}
		else
			std::cerr << RED "Index " << static_cast<int>(index) << " does not have any contact yet." << RESET << std::endl;
	}
}
