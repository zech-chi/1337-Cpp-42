/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:44:24 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/14 10:03:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

#define RESET	"\033[0m"
#define YELLOW	"\033[1;33m"
#define RED		"\033[1;31m"
#define ORANGE	"\033[38;5;214m"
#define PURPLE	"\033[35m"


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

		void		add(void);
		void		search(void);
		void		display1(void);
		void		display2(void);

	private:
		Contact				_contacts[8];
		uint8_t	_index;
		uint8_t	_size;
		// unsigned short int	_index;
		// unsigned short int	_size;
};

#endif
