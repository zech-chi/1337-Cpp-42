/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 13:48:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

    ScavTrap    t1("dog");
    ScavTrap    t2("cat");

    t1.display();
    t2.display();
    for (int i = 1; i < 100; i++)
    {
        std::cout << i << "  ";
        t1.attack("cat");
        t2.takeDamage(t1.getAttackDamage());
    }
    t1.display();
    t2.display();
    t1.guardGate();
    return (0);
}
