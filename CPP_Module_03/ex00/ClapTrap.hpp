/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:33 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/24 11:30:41 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef unsigned int uint;

class	ClapTrap
{

	private:
		std::string	_name;
		uint		_hitPoints;
		uint		_energyPoints;
		uint		_attackDamage;

	public:
		ClapTrap();
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap& origine);
		ClapTrap& operator=( const ClapTrap& origine );
		~ClapTrap();
		
		void	attack( const std::string& target );
		void	takeDamage( uint amount );
		void	beRepaired( uint amount );

		uint		getAttackDamage() const;


		void	display();
};

#endif
