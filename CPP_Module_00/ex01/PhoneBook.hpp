/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:44:24 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/15 08:11:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"


class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		/// Prompts the user to enter a command from the available options.
		/// Accepts only three commands: ADD, SEARCH, EXIT.
		/// Reads the command from standard input and processes it accordingly.
		/// Continues to prompt the user until a valid command is entered.
		///
		/// The function will repeatedly display a prompt asking the user to enter
		/// one of the following commands.
		/// - "ADD" to add a new contact to the phonebook.
		/// - "SEARCH" to search for a contact in the phonebook.
		/// - "EXIT" to exit the ./phonebook program and the contacts are lost forever!
		void		getPrompts(void);

		/// Adds a new contact to the phonebook.
		/// Prompts the user to enter contact details:
		/// - first name
		/// - last name
		/// - nickname
		/// - phone number
		/// - darkest secret
		/// Validates the input and stores the new contact in the phonebook.
		/// If the phonebook is full, replaces the oldest contact with the new contact.
		void		add(void);

		/// Displays some informations of all contacts
		/// Prompts the user to enter the index of the contact they wish to find.
		/// Displays the contact's details if found, or notifies the user if the contact is not present.
		void		search(void);


	private:
		Contact	_contacts[8];
		uint8_t	_index;
		uint8_t	_size;
};

#endif
