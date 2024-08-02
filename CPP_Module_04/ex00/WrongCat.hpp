/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:06:05 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 18:51:00 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat( const WrongCat& origine );
        WrongCat& operator=( const WrongCat& origine );
        ~WrongCat();

        void    makeSound() const;
};
