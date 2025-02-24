#include <iostream>

int main() {
    // double d = 5.5;
    // int a = static_cast<int>(d);  // Converts double to int


    // std::cout << d << "\n";
    // std::cout << a << "\n";

    const int a = 10;
    int* ptr = const_cast<int*>(&a);
    *ptr = 1337;

    std::cout << a << "\n";

    return (0);
}


/*
    dynamic_cast safe for downcasting in polymorphic classes;
*/