#include <iostream>


int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

std::string add(std::string a, std::string b) {
    return a + b;
}

int main() {
    std::cout << "adding two numbers: " << add(13, 37) << "\n";
    std::cout << "adding two float  : " << add(13.42f, 37.42f) << "\n";
    std::cout << "adding two strings: " << add(std::string("13"), std::string("37")) << "\n";
    std::cout << "done!\n";
    return (0);
}

