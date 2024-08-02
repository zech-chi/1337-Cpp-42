/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:21 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 19:09:25 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class   Animal
{

    protected:
        std::string type;

    public:
        Animal();
        Animal( const Animal& origine );
        Animal& operator=( const Animal& origine );
        virtual ~Animal();

        std::string    getType() const;
        virtual void    makeSound() const;

};
