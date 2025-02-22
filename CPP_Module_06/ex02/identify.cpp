#include "identify.hpp"

Base * generate(void) {
    std::srand(std::time(0));
    int randomNum = std::rand() % 3;
    if (randomNum == 0) {
        std::cout << BOLD_YELLOW << "generate : A\n" << RESET;
        return (new(std::nothrow) A());
    }
    else if (randomNum == 1) {
        std::cout << BOLD_YELLOW << "generate : B\n" << RESET;
        return (new(std::nothrow) B());
    }
    else {
        std::cout << BOLD_YELLOW << "generate : C\n" << RESET;
        return (new(std::nothrow) C());
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << BOLD_GREEN << "type is  : A\n" << RESET;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << BOLD_GREEN << "type is  : B\n" << RESET;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << BOLD_GREEN << "type is  : C\n" << RESET;
    }
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << BOLD_BLUE << "type is  : A\n" << RESET;
        (void)a;
        return ;
    } catch (std::bad_cast) { 
        // std::cerr << BOLD_RED << "awdiii in A\n" << RESET; 
    }

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << BOLD_BLUE << "type is  : B\n" << RESET;
        (void)b;
        return ;
    } catch (std::bad_cast) {
        // std::cerr << BOLD_RED << "awdiii in B\n" << RESET; 
    }

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << BOLD_BLUE << "type is  : C\n" << RESET;
        (void)c;
        return ;
    } catch (std::bad_cast) {
        // std::cerr << BOLD_RED << "awdiii in C\n" << RESET; 
    }
}
