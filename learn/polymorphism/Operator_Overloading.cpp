#include <iostream>

class   Complex
{
    private:
        float   img;
        float   real;
    
    public:
        Complex(float newImg, float newReal) : img(newImg), real(newReal)
        {
        }

        Complex() : img(0.0f), real(0.0f)
        {
        }

        void    print()
        {
            std::cout << real << " + " << img << "i" << std::endl;
        }

        Complex    operator+( const Complex& origine )
        {
            Complex newC;

            newC.img = origine.img + this->img;
            newC.real = origine.real + this->real;
            return (newC);
        }
};


int main()
{
    Complex c1(3.5f, 44);
    Complex c2(2, 2);
    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
    return (0);
}