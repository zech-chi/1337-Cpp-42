#include <iostream>


class   Animal
{
    private:
        int age;
    public:
        Animal() : age(44)
        {

        }

        void    printAge()
        {
            std::cout << age << std::endl;
        }
};


class   Dog : public Animal
{
    public:
        
};

int main()
{
    Dog    d;

    d.printAge();
    return (0);
}