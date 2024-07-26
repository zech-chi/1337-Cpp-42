/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:24:40 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:24:41 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _name = "diamondtrap0";
	ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "Derived class DiamondTrap {diamondtrap0} default constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name )
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
	std::cout << "Derived class DiamondTrap {"<< _name << "} parameterized constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& origine)
 : ClapTrap(origine), FragTrap(origine), ScavTrap(origine), _name(origine._name)
{

}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& origine )
{
	if (this != &origine)
	{
		ClapTrap::operator=(origine);
        _name = origine._name;
	}
	return (*this);	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Derived class DiamondTrap {" << _name << "} destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::display()
{
	std::cout << "---------------------------------------" << std::endl;
    whoAmI();
	std::cout << "hitPoints : " << _hitPoints << std::endl;
	std::cout << "energyPoints : " << _energyPoints << std::endl;
	std::cout << "attackDamage : " << _attackDamage << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}
