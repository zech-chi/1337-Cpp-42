#include "Span.hpp"

// int main() {
//     std::string spliter;
//     spliter = std::string(BOLD_YELLOW) + "\n" + std::string(42, '.') + "\n\n" + std::string(RESET); 

//     {
//         Span    sp(3);
//         try {
//             sp.addNumber(1);
//             sp.addNumber(13);
//             sp.addNumber(-1);
//             sp.addNumber(233);
//             sp.addNumber(0);
//         } catch (std::exception &e) {
//             std::cout << BOLD_RED;
//             std::cout << "Exception: " << e.what() << "\n";
//             std::cout << RESET;
//         }
//         sp.display();
//     }

//     std::cout << spliter;

//     {
//         Span    sp(5);
//         try {
//             sp.addNumber(6);
//             sp.addNumber(3);
//             sp.addNumber(17);
//             sp.addNumber(9);
//             sp.addNumber(11);
//             std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
//             std::cout << "longestSpan  = " << sp.longestSpan() << std::endl;
//         } catch (std::exception &e) {
//             std::cout << BOLD_RED;
//             std::cout << "Exception: " << e.what() << "\n";
//             std::cout << RESET;
//         }
//         sp.display();
        
//     }

//     std::cout << spliter;

//     {
//         Span    sp(1);
//         try {
//             sp.addNumber(2);
//             std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
//             std::cout << "longestSpan  = " << sp.longestSpan() << std::endl;
//         } catch (std::exception &e) {
//             std::cout << BOLD_RED;
//             std::cout << "Exception: " << e.what() << "\n";
//             std::cout << RESET;
//         }
//         sp.display();
        
//     }

//     std::cout << spliter;

//     {
//         Span    sp(3);
//         try {
//             sp.addNumber(13);
//             sp.addNumber(13);
//             sp.addNumber(42);
//             std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
//             std::cout << "longestSpan  = " << sp.longestSpan() << std::endl;
//         } catch (std::exception &e) {
//             std::cout << BOLD_RED;
//             std::cout << "Exception: " << e.what() << "\n";
//             std::cout << RESET;
//         }
//         sp.display();
        
//     }

//     std::cout << spliter;



//     std::cout << BOLD_GREEN << "done!\n" << RESET;
//     return (0);
// }


std::vector<int> createVector(unsigned int size) {
    std::vector<int>    v(size);
    std::srand(std::time(NULL));
    
    for (size_t i = 0; i < size; i++) {
        v[i] = std::rand();
    }
    return v;
}

// int main() {
//     Span sp;
//     try {
//         sp.display();
//         std::vector<int> v = createVector(1337);
//         sp.fillSpan(v.begin(), v.end());
//         std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
//         std::cout << "longestSpan  = " << sp.longestSpan() << std::endl;

//     } catch (std::exception &e) {
//         std::cout << BOLD_RED;
//         std::cout << "Exception: " << e.what() << "\n";
//         std::cout << RESET;
//     }
//     sp.display();
//     std::cout << BOLD_GREEN << "done!\n" << RESET;
//     return (0);
// }

int main() {
    Span sp(10000);
    try {
        sp.display();
        std::vector<int> v = createVector(100000);
        sp.fillSpan(v.begin(), v.end());
        std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan  = " << sp.longestSpan() << std::endl;

    } catch (std::exception &e) {
        std::cout << BOLD_RED;
        std::cout << "Exception: " << e.what() << "\n";
        std::cout << RESET;
    }
    sp.display();
    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
