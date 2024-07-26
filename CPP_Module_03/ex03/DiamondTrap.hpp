/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:24:43 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:24:44 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string    _name;

    public:
        DiamondTrap();
        DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap& origine);
		DiamondTrap& operator=( const DiamondTrap& origine );
        ~DiamondTrap();

        void	attack( const std::string& target );
        void    whoAmI();

        void    display();
};
