#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void){}

bool		Contact::setFirstName(std::string newFirstName)
{
	_firstName = newFirstName;
	return (true);
}

bool		Contact::setLastName(std::string newLastName)
{
	_lastName = newLastName;
	return (true);
}

bool		Contact::setNickName(std::string newNickName)
{
	_nickName = newNickName;
	return (true);
}

bool		Contact::setPhoneNumber(std::string newPhoneNumber)
{
	_phoneNumber = newPhoneNumber;
	return (true);
}

bool		Contact::setDarkestSecret(std::string newDarkestSecret)
{
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
