/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:23:56 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:23:57 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& origine);
		ScavTrap& operator=( const ScavTrap& origine );
        ~ScavTrap();

        void	attack( const std::string& target );
        void    guardGate();
};
