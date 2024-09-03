/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:48:01 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/21 17:24:36 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

#include "ICharacter.hpp"

class   Character : public ICharacter
{
    private:
        AMateria    *inventory[4];
        int         index;
        std::string name;
    
    public:
        Character( std::string const& name );
        Character( const Character& other );
        Character& operator=( const Character& other );
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
