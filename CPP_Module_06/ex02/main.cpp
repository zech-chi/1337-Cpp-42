#include "identify.hpp"

int main() {

    Base *ptrBase = generate();
    if (!ptrBase) {
        std::cerr << BOLD_RED << "new Failed\n";
        exit(1);
    }

    identify(ptrBase);
    identify(*ptrBase);
    delete ptrBase;

    std::cout << BOLD_GREEN << "\ndone!\n" << RESET;
    return (0);
}