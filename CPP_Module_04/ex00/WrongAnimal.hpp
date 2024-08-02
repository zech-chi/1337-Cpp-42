/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:56:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 18:36:15 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class   WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal( const std::string& type );
        WrongAnimal( const WrongAnimal& origine );
        WrongAnimal& operator=( const WrongAnimal& origine );
        ~WrongAnimal();

        std::string getType() const;
        void        makeSound() const;
};
