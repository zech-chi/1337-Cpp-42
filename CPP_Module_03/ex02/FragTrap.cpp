#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap()
{
    _name = "fragtrap0";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Derived class FragTrap {fragtrap0} default constuctor called" << std::endl;
}

/* Parameterized Constructor */
FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Derived class FragTrap {"<< _name << "} parameterized constuctor called" << std::endl;
}


FragTrap::FragTrap( const FragTrap& origine) : ClapTrap(origine)
{

}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "Derived class FragTrap {" << _name << "} destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& origine )
{
	if (this != &origine)
	{
		ClapTrap::operator=(origine);
	}
	return (*this);
}

void	FragTrap::attack( const std::string& target )
{
	if (!_hitPoints) {
		std::cout << "FragTrap " << _name << " can't attack, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << "FragTrap " << _name << " can't attack, no energyPoints left!" << std::endl;
	} else {
		std::cout << "FragTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " FragTrap high fives request." << std::endl;
}
