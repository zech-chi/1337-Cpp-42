#include <cstdlib>

void checkLeaks() {
    std::cout << "Checking for memory leaks..." << std::endl;
    system("leaks -q a.out");
}


atexit(checkLeaks);