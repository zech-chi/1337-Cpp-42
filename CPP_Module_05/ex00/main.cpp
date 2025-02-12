#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b1("zech-chi", 7);
    std::cout << "b1: " << b1;
    Bureaucrat b2("xorman", 13);
    std::cout << "b2: " << b2;
    b2 = b1;
    std::cout << "decrement the grade for b1 ...\n";
    b1.decrementGrade();
    std::cout << "b1: " << b1;
    std::cout << "increment the grade for b2 ...\n";
    b2.incrementGrade();
    std::cout << "b2: " << b2;

}