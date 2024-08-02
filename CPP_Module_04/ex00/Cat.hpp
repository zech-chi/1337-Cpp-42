/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 18:39:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class   Cat : public Animal
{
    public:
        Cat();
        Cat( const Cat& origine );
        Cat& operator=( const Cat& origine );
        ~Cat();

        void    makeSound() const;
};
