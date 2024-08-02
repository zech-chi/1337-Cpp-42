/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:34 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 18:47:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog();
        Dog( const Dog& origine );
        Dog& operator=( const Dog& origine );
        ~Dog();

        void    makeSound() const;
};
