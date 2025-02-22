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
    Dog* dogPtr = new Dog();
    dogPtr->speak();
    Animal* animalPtr = dynamic_cast<Animal*>(dogPtr);

    if (animalPtr) {
        animalPtr->speak();
    } else {
        std::cerr << "Failed to cast to Animal.\n";
    }

    Cat* catPtr = dynamic_cast<Cat*>(dogPtr);
    if (catPtr) {
        catPtr->speak();
    } else {
        std::cerr << "Failed to cast to Cat.\n";
    }

    delete dogPtr;
    return (0);
}
