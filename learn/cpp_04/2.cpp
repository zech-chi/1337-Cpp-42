#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() const {
        std::cout << "Woof!" << std::endl;
    }
};


class Cat : public Animal {
public:
    void makeSound() const {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();
    myAnimal->makeSound();

    myAnimal = new Cat();
    myAnimal->makeSound();

    delete myAnimal;
    return 0;
}
