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
		// DiamondTrap( const DiamondTrap& origine);
		// DiamondTrap& operator=( const DiamondTrap& origine );
        // ~DiamondTrap();

        // void	attack( const std::string& target );
        void    whoAmI();
};
