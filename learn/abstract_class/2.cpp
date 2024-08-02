#include <iostream>


class   Base
{
    public:
        virtual void    sayhello();

};


int main()
{
    int a, b,c;
    a = 12; b = 19 ; c = 90;
    (a = b) = c;
    a = b = c;
    std::cout << a << std::endl;
}