#include "Bureaucrat.hpp"

// int main() {
//     Bureaucrat b1("zech-chi", 7);
//     std::cout << "b1: " << b1;
//     Bureaucrat b2("xorman", 13);
//     std::cout << "b2: " << b2;
//     b2 = b1;
//     std::cout << "decrement the grade for b1 ...\n";
//     b1.decrementGrade();
//     std::cout << "b1: " << b1;
//     std::cout << "increment the grade for b2 ...\n";
//     b2.incrementGrade();
//     std::cout << "b2: " << b2;
// }

// int main() {
//     Bureaucrat b1("b1", 111);
//     std::cout << b1;

//     for (int i = 0; i < 500; i++) {
//         try {
//             b1.incrementGrade();
//         }
//         catch (char const *s) {
//             std::cout << s;
//         }
//         std::cout << b1;
//     }
// }

// int main() {
//     Bureaucrat b1("b1", 111);
//     std::cout << b1;

//     for (int i = 0; i < 500; i++) {
//         try {
//             b1.decrementGrade();
//         }
//         catch (char const *s) {
//             std::cout << s;
//         }
//         std::cout << b1;
//     }
// }


int main() {
    std::string name = "b1";
    int         grade = 5;
    int         N = 10;

    Bureaucrat b1(name, grade);
    std::cout << b1;

    for (int i = 0; i < N; i++) {
        try {
            b1.incrementGrade();
        }
        catch (std::exception &e) {
            std::cout << "exception: " << e.what() << "\n";
        }
        std::cout << b1;
    }
    std::cout << "done!\n";
    return (0);
}

