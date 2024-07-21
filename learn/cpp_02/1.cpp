#include <iostream>


class Add {

    public:
        int    add(int a, int b)
        {
            return (a + b);
        }
        int    add(int a, int b, int c)
        {
            return (a + b + c);
        }

        int    add(int a, int b, int c, int d)
        {
            return (a + b + c + d);
        }

};


int main()
{
    Add obj;

    std::cout << obj.add(1, 2) << std::endl;
    std::cout << obj.add(1, 2, 3) << std::endl;
    std::cout << obj.add(1, 2, 3, 4) << std::endl;
    return (0);
}
