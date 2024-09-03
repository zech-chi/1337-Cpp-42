/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:37 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 15:17:38 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const   int size = 4;
    Animal* animals[size];

    //create
    for (int i = 0; i < size; i++)
    {
        std::cout << i << std::endl;
        if (i < size / 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    std::cout << std::endl;
    
    //print
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " --> " <<"type: " << animals[i]->getType() << ", sound: ";
        animals[i]->makeSound();
    }

    std::cout << std::endl;
    //delete
    for (int i = 0; i < size; i++)
    {
        std::cout << i << std::endl;
        delete animals[i];
    }

    return (0);
}
