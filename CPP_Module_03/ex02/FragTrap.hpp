/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:24:19 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:24:20 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
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
