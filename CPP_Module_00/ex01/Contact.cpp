#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void){}

bool		hasSpaces(std::string prompt)
{
	if (prompt.empty())
		return (true);
	for (size_t i = 0; i < prompt.length(); i++)
	{
		if (std::isspace(prompt.at(i)))
			return (true);
	}
	return (false);
}

bool		fullSpaces(std::string prompt)
{
	if (prompt.empty())
		return (true);
	for (size_t i = 0; i < prompt.length(); i++)
	{
		if (!std::isspace(prompt.at(i)))
			return (false);
	}
	return (true);
}

bool		isNumber(std::string prompt)
{
	for (size_t i = 0; i < prompt.length(); i++)
	{
		if (!std::isdigit(prompt.at(i)))
			return (false);
	}
	return (true);
}

bool		Contact::setFirstName(std::string newFirstName)
{
	if (hasSpaces(newFirstName))
		return (false);
	_firstName = newFirstName;
	return (true);
}

bool		Contact::setLastName(std::string newLastName)
{
	if (hasSpaces(newLastName))
		return (false);
	_lastName = newLastName;
	return (true);
}

bool		Contact::setNickName(std::string newNickName)
{
	if (hasSpaces(newNickName))
		return (false);
	_nickName = newNickName;
	return (true);
}

bool		Contact::setPhoneNumber(std::string newPhoneNumber)
{
	if (hasSpaces(newPhoneNumber) || !isNumber(newPhoneNumber))
		return (false);
	_phoneNumber = newPhoneNumber;
	return (true);
}

bool		Contact::setDarkestSecret(std::string newDarkestSecret)
{
	if (fullSpaces(newDarkestSecret))
		return (false);
	_darkestSecret = newDarkestSecret;
	return (true);
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickName(void)
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}
