/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/24 11:40:26 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ostream>

/* Default constructor */
ClapTrap::ClapTrap()
{
	_name = "claptrap0";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Base class ClapTrap {claptrap0} default constuctor called" << std::endl;
}

/* Parameterized Constructor */
ClapTrap::ClapTrap( const std::string& name )
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Base class ClapTrap {" << _name << "} parameterized constuctor called" << std::endl;
}

/* The copy constructor initializes a new object using an existing object. */
ClapTrap::ClapTrap( const ClapTrap& origine)
{
	std::cout << "Base class ClapTrap Copy constructor called" << std::endl;
	*this = origine;
}

/*
	The copy assignment operator assigns the values from one 
	existing object to another existing object, 
	checking for self-assignment to avoid unnecessary work.
*/
ClapTrap& ClapTrap::operator=( const ClapTrap& origine)
{
	std::cout << "Base class ClapTrap Copy assignment operator called" << std::endl;
	if (this != &origine)
	{
		_name = origine._name;
		_hitPoints = origine._hitPoints;
		_energyPoints = origine._energyPoints;
		_attackDamage = origine._attackDamage;
	}
	return (*this);
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "Base class ClapTrap {" << _name << "} destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (!_hitPoints) {
		std::cout << _name << " can't attack, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << _name << " can't attack, no energyPoints left!" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage( uint amount )
{
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void	ClapTrap::beRepaired( uint amount )
{
	if (!_hitPoints) {
		std::cout << _name << " can't repair, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << _name << " can't repair, no energyPoints left!" << std::endl;
	} else {
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << _name << " repaired!" << std::endl;
	}
}

void	ClapTrap::display()
{
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "name : " << _name << std::endl;
	std::cout << "hitPoints : " << _hitPoints << std::endl;
	std::cout << "energyPoints : " << _energyPoints << std::endl;
	std::cout << "attackDamage : " << _attackDamage << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}

uint	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}
