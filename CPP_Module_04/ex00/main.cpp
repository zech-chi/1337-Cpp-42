/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:37 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 19:00:06 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    return 0;
}

// int main()
// {
//     const WrongAnimal* meta = new WrongAnimal();
//     const WrongAnimal* i = new WrongCat();
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     meta->makeSound();

//     delete meta;
//     delete i;
//     return 0;
// }

// int main()
// {
//     WrongCat  c1 = WrongCat();
//     WrongCat  c2 = c1;
//     WrongCat c3;

//     c3 = c1;
//     std::cout << c1.getType() << std::endl;
//     std::cout << c2.getType() << std::endl;
//     std::cout << c3.getType() << std::endl;
// }
