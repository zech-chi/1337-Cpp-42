
#include <iostream>

class MyClass {
    public:
        int value;
    
    MyClass(int val) : value(val)
    {
    }

    int add(int x, int y) { return x + y; }
};


int main()
{
    MyClass obj(10);

    int (MyClass::*ptrToMemberFunction)(int, int) = &MyClass::add;

    int res = (obj.*ptrToMemberFunction)(30, 20);

    std::cout << res << std::endl;
    return (0);
}
