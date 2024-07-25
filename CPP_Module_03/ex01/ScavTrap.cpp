#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Default constructor */
ScavTrap::ScavTrap()
{
    _name = "scavtrap0";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Derived class ScavTrap {scavtrap0} default constuctor called" << std::endl;
}

/* Parameterized Constructor */
ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Derived class ScavTrap {"<< _name << "} parameterized constuctor called" << std::endl;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "Derived class ScavTrap {" << _name << "} destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (!_hitPoints) {
		std::cout << "ScavTrap " << _name << " can't attack, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << "ScavTrap " << _name << " can't attack, no energyPoints left!" << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}


ScavTrap::ScavTrap( const ScavTrap& origine) : ClapTrap(origine)
{
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& origine )
{
	if (this != &origine)
	{
		ClapTrap::operator=(origine);
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " ScavTrap is now in Gatekeeper mode." << std::endl;
}
