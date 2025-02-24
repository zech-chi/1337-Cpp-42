#include <iostream>

class Base {
public:
    virtual ~Base() {}  // Virtual destructor to enable RTTI
    virtual void show() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
    void show() { std::cout << "Derived class" << std::endl; }
};


// int main() {
//     Base *ptrBase = new Base();

//     ptrBase->show();

//     Derived *ptrDerived = dynamic_cast<Derived*>(ptrBase);

//     if (!ptrDerived) {
//         std::cout << "failed to cast\n";
//     } else {
//         ptrDerived->show();
//     }

//     delete ptrBase;
//     std::cout << "done!\n";
//     return (0);

// }

// int main() {
//     Base *ptrBase = new Derived();

//     ptrBase->show();

//     Derived *ptrDerived = dynamic_cast<Derived*>(ptrBase);

//     if (!ptrDerived) {
//         std::cout << "failed to cast\n";
//     } else {
//         ptrDerived->show();
//     }

//     delete ptrBase;
//     std::cout << "done!\n";
//     return (0);

// }

int main() {
    Base *ptrDerived = new Derived();

    ptrDerived->show();

    Base *ptrBase = dynamic_cast<Base*>(ptrDerived);

    if (!ptrBase) {
        std::cout << "failed to cast\n";
    } else {
        ptrBase->show();
    }

    delete ptrDerived;
    std::cout << "done!\n";
    return (0);
}
