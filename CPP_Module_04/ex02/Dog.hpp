/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:34 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/03 11:39:37 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
	private:

	public:
		Brain* _brain;
		Dog();
		Dog( const Dog& origine );
		Dog& operator=( const Dog& origine );
		~Dog();

		void    makeSound() const;
};
