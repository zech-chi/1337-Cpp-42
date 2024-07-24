/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/24 11:40:12 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // ClapTrap    t1("tom");
    // ClapTrap    t2("jerry");


    // t1.display();
    // t2.display();
    // for (int i = 0; i < 14; i++)
    // {
    //     std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    //     std::cout << i << std::endl;
    //     t1.attack("jerry");
    //     t2.takeDamage(t1.getAttackDamage());
    //     t1.display();
    //     t2.display();
    //     std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
    // }

    ClapTrap    t1("tom");
    ClapTrap    t2;

    t2 = t1;

    t2.display();
    

    return (0);
}
