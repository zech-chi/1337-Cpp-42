#include <iostream>

class   Base
{
    public:
        void    sayhello()
        {
            std::cout << "hello from base class" << std::endl;
        }
};


class   Derived : public Base
{
    public:
        void    sayhello()
        {
            std::cout << "hello from derived class" << std::endl;
        }
};


int main()
{
    Base    b;
    Derived d;

    b.sayhello();
    d.sayhello();
}