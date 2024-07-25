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

#include "ScavTrap.hpp"

int main()
{

    ScavTrap    t1("zzzzz");
    ScavTrap    t2;

    t2 = t1;

    for (int i = 1; i < 100; i++)
    {
        std::cout << i << "  ";
        t1.attack("titaz");
    }
    t1.guardGate();
    return (0);
}
