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
