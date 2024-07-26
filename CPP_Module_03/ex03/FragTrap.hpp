/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:24:50 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:24:51 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap( const std::string& name );
		FragTrap( const FragTrap& origine);
		FragTrap& operator=( const FragTrap& origine );
        ~FragTrap();

        void	attack( const std::string& target );
        void highFivesGuys(void);
};
