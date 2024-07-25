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
