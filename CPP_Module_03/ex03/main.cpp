/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:18:24 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1("d1");
    DiamondTrap d2("d2");

    d1.display();
    d2.display();
    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << " ----> ";
        d1.attack("d2");
        if (i == 2)
            d2.beRepaired(10);
        d2.takeDamage(d1.getAttackDamage());
    }
    d1.display();
    d2.display();


    d1.guardGate();
    d1.highFivesGuys();

    return (0);
}
