/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:49:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/26 13:24:31 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    t1("tom");
    ClapTrap    t2("jerry");


    for (int i = 1; i <= 15; i++)
    {
        std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
        std::cout << i << std::endl;
        t1.attack("jerry");
        t2.takeDamage(t1.getAttackDamage());
    }

    return (0);
}
