#include <iostream>

class Animal {
public:
    Animal() { std::cout << "Animal created\n"; }
    // try with and without virtual keyword
    virtual ~Animal() { std::cout << "Animal destroyed\n"; } 
};

class Dog : public Animal {
public:
    Dog() { std::cout << "Dog created\n"; }
    ~Dog() { std::cout << "Dog destroyed\n"; }
};

int main() {
    Animal* pet = new Dog();
    delete pet; // Undefined behavior without a virtual destructor!
    return 0;
}
