/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 14:00:43 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

    FragTrap    f1("fragoza");
    FragTrap    f2;

    f1.display();
    f2.display();
    for (int i = 1; i <= 105; i++)
    {
        std::cout << i << "  ";
        f1.attack("fragtrap0");
        f2.takeDamage(f1.getAttackDamage());
    }
    f1.display();
    f2.display();
    f1.highFivesGuys();
    return (0);
}
