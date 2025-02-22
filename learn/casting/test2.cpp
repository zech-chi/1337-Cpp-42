#include <iostream>

class Animal {
    public:
        virtual void speak() {
            std::cout << "Animal speaks.\n";
        }
};


class Dog : public Animal {
    public:
        void speak() {
            std::cout << "Dog barks.\n";
        }
};

class Cat : public Animal {
    public:
        void speak() {
            std::cout << "Cat meows.\n";
        }
};

int main() {
    Animal* animalPtr = new Dog();
    animalPtr->speak();
    Dog* dogPtr = static_cast<Dog*>(animalPtr);

    if (dogPtr) {
        dogPtr->speak();
    } else {
        std::cerr << "Failed to cast to Dog.\n";
    }

    Cat* catPtr = static_cast<Cat*>(animalPtr);
    if (catPtr) {
        catPtr->speak();
    } else {
        std::cerr << "Failed to cast to Cat.\n";
    }

    delete animalPtr;
    return (0);
}
