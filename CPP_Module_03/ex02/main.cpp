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

#include "FragTrap.hpp"

int main()
{

    FragTrap    f1("fragoza");
    FragTrap    f2;

    f2 = f1;

    for (int i = 1; i < 100; i++)
    {
        std::cout << i << "  ";
        f1.attack("titaz");
    }
    f1.highFivesGuys();
    return (0);
}
