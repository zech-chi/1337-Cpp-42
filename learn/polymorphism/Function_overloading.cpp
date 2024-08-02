#include <iostream>


class   Test
{
    public:
        int add(int a, int b)
        {
            return (a + b);
        }

        int add(int a, int b, int c)
        {
            return (a + b + c);
        }

        float   add(float a, float b)
        {
            return (a + b);
        }

        double  add(double a, double b)
        {
            return (a + b);
        }
};


int     main()
{
    Test    instence;

    std::cout << instence.add(1, 2) << std::endl;
    std::cout << instence.add(1, 2, 3) << std::endl;
    std::cout << instence.add(3.5f, 4.544f) << std::endl;
    std::cout << instence.add(3.49949994999999, 49.985348843484) << std::endl;

    return (0);
}
