/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:47:23 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/15 16:11:42 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdint>
# include <string>

# define RESET	"\033[0m"
# define YELLOW	"\033[1;33m"
# define RED	"\033[1;31m"
# define ORANGE	"\033[38;5;214m"
# define GREEN "\033[32m"

class Contact {

	public:

		Contact(void);

		/// @brief Destructor for the Contact class. 
		/// Cleans up resources and performs any necessary finalization.
		~Contact(void);

		/// @brief Sets the first name.
		/// @param newFirstName The new first name to set.
		/// @return True if the first name is valid and was set, false otherwise.
		bool		setFirstName(std::string newFirstName);

		/// @brief Sets the last name.
		/// @param newLastName The new last name to set.
		/// @return True if the last name is valid and was set, false otherwise.
		bool		setLastName(std::string newLastName);

		/// @brief Sets the nickname.
		/// @param newNickName The new nickname to set.
		/// @return True if the nickname is valid and was set, false otherwise.
		bool		setNickName(std::string newNickName);

		/// @brief Sets the phone number.
		/// @param newPhoneNumber The new phone number to set.
		/// @return True if the phone number is valid and was set, false otherwise.
		bool		setPhoneNumber(std::string newPhoneNumber);

		/// @brief Sets the darkest secret.
		/// @param newDarkestSecret The new darkest secret to set.
		/// @return True if the darkest secret is valid and was set, false otherwise.
		bool		setDarkestSecret(std::string newDarkestSecret);

		/// @brief Retrieves the first name.
		/// @return The first name as a std::string.
		std::string	getFirstName(void);

		/// @brief Retrieves the last name.
		/// @return The last name as a std::string.
		std::string	getLastName(void);

		/// @brief Retrieves the nickname.
		/// @return The nickname as a std::string.
		std::string	getNickName(void);

		/// @brief Retrieves the phone number.
		/// @return The phone number as a std::string.
		std::string	getPhoneNumber(void);

		/// @brief Retrieves the darkest secret.
		/// @return The darkest secret as a std::string.
		std::string	getDarkestSecret(void);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
