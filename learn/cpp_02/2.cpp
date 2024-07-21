# include <iostream>

class Complex {
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imag = i;
        }

        Complex operator+(Complex const& obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return (res);
        }

        void    print()
        {
            std::cout << real << " + i" << imag << std::endl;
        }
};


int main()
{
    Complex c1(10, 5), c2(2, 4);

    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
}
