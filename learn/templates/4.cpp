#include <iostream>

class Complex {
    private:
        float _x;
        float _y;
    public:
        Complex(float x, float y) : _x(x), _y(y) {}
        ~Complex() {}
        Complex operator + (const Complex& other) const {
            return Complex(_x + other._x, _y + other._y);
        }

        float getX() const { return (_x); } 
        float getY() const { return (_y); }
};

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.getX() << "i" << " + " << c.getY();
    return os;
}


template <typename Type>
Type add(Type a, Type b) {
    // std::cout << "in add func\n";
    return a + b;
}


int main() {
    std::cout << "adding two numbers: " << add<int>(13, 37) << "\n";
    std::cout << "adding two float  : " << add<float>(13.42f, 37.42f) << "\n";
    std::cout << "adding two strings: " << add<std::string>(std::string("13"), std::string("37")) << "\n";

    Complex a(1, 1);
    Complex b(7, 3);

    std::cout << "Complex a = " << a << "\n";
    std::cout << "Complex b = " << b << "\n";
    std::cout << "a + b     = " << add<Complex>(a, b) << "\n";
    std::cout << "done!\n";

    return (0);
}

