#include <iostream>

template <typename T, typename U>

/*
--> class template
--> function template
--> alias template (since c++ 11)
--> variable template (since c++ 14)
--> constraints and concepts (since c++20)
*/

T max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {
    std::cout << max(1337.42, 2.1) << "\n";
    return (0);
}
