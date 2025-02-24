#include "Array.hpp"

// test1: Int

// int main() {
//     std::string spliter(42, '-');

//     std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;
//     Array<int> arrInt1;
//     std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

//     std::cout << "arrInt1 = "; arrInt1.display();
//     std::cout << "arrInt1[0] = ? \n";
//     try {
//         std::cout << arrInt1[0] << "\n";
//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << e.what() << "\n" << RESET;
//     }

//     std::cout << BOLD_GREEN << "done!\n";
//     return (0);
// }

// test2: Int

// int main() {
//     std::string spliter(42, '-');
//     std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

//     try {
//         Array<int> arrInt1;
//         Array<int> arrInt2(10);

//         std::cout << "arrInt1 = "; arrInt1.display();
//         std::cout << "arrInt2 = "; arrInt2.display();

//         std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

//         std::cout << "arrInt1 = arrInt2\n";
//         arrInt1 = arrInt2;
    
//         std::cout << "arrInt1 = "; arrInt1.display();
//         std::cout << "arrInt2 = "; arrInt2.display();

//         std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;
//         std::cout << "arrInt1[0] = 1337\n"; arrInt1[0] = 1337;
//         std::cout << "arrInt2[1] = 42\n"; arrInt2[1] = 42;
//         std::cout << "arrInt1 = "; arrInt1.display();
//         std::cout << "arrInt2 = "; arrInt2.display();
//         std::cout << BOLD_GREEN << "deepcopy is good!\n" << RESET;

//         std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << e.what() << "\n" << RESET;
//     }

//     std::cout << BOLD_GREEN << "done!\n";
//     return (0);
// }

// String

int main() {
    std::string spliter(42, '-');
    std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

    try {
        Array<std::string> arrString1(7);
        
        for (int i = 0; i < 7; i++) {
            if (i % 2)
                arrString1[i] = "odd";
            else
                arrString1[i] = "even";
        }

        std::cout << "arrString1 = "; arrString1.display();

        std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

        std::cout << "copy arrString1 in arrString2\n";
        const Array<std::string> arrString2(arrString1);
    
        std::cout << "arrString1 = "; arrString1.display();
        std::cout << "arrString2 = "; arrString2.display();

        std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

        std::cout << "update arrString1\n";
        for (int i = 0; i < 7; i++) {
            if (i % 2)
                arrString1[i] = "1337";
            else
                arrString1[i] = "42";
        }
        std::cout << "arrString1 = "; arrString1.display();
        std::cout << "arrString2 = "; arrString2.display();

        std::cout << BOLD_YELLOW << "\n" << spliter << "\n\n" << RESET;

        std::cout << "arrString2[0] = " << arrString2[0] << "\n";
        // arrString2[0] = "1.618"; // failed to complile
        // arrString1[1337] = "1337"; // throw exception out of bound

    } catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << "\n" << RESET;
    }

    std::cout << BOLD_GREEN << "done!\n";
    return (0);
}

