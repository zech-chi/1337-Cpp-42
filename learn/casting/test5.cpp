#include <iostream>

int main() {
    const int n = 42;
    const int *ptr = &n;

    int *nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 1337;

    std::cout << *nonConstPtr << "\n";

    std::cout << "done\n";
    return (0);
}
