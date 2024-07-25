#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _name = "diamondtrap0";
	ClapTrap::_name = _name + "_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "Derived class DiamondTrap {diamondtrap0} default constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name )
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;	
	std::cout << "Derived class DiamondTrap {"<< _name << "} parameterized constuctor called" << std::endl;
}

// DiamondTrap::DiamondTrap( const DiamondTrap& origine)
// {
	
// }

// DiamondTrap::~DiamondTrap()
// {
	
// }

// DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& origine )
// {
	
// }

// void	DiamondTrap::attack( const std::string& target )
// {
	
// }

void    DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}
