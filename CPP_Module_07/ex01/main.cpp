#include "iter.hpp"

void    upper(char &c) {
    if ('a' <= c && c <= 'z') {
        c -= 32;
    }
}

void    lower(char &c) {
    if ('A' <= c && c <= 'Z') {
        c += 32;
    }
}

void    doAbs(int &x) {
    if (x < 0) {
        x *= -1;
    }
}

void    displayInt(int *arr, int len) {
    if (len == 0 || !arr)
        return;
    std::cout << "[" << arr[0];
    for (int i = 1; i < len; i++) {
        std::cout << ", " << arr[i];
    }
    std::cout << "]\n";
}

int main() {
    std::string spliter(42, '$');

    char str[] = "zech-chi";

    std::cout << "\n" << spliter << "\n\n";
    std::cout << BOLD_YELLOW << "str   = " << str << "\n" << RESET;

    // upply upper to str
    iter(str, sizeof(str), upper);
    std::cout << BOLD_GREEN << "upper : " << str << "\n" << RESET;

    // upply lower to str
    iter(str, sizeof(str), lower);
    std::cout << BOLD_GREEN << "lower : " << str << "\n" << RESET;

    std::cout << "\n" << spliter << "\n\n";

    int integers[] = {-1, -7, 1337};

    std::cout << BOLD_YELLOW << "integers before : ";
    displayInt(integers, sizeof(integers) / sizeof(int));
    std::cout << RESET;

    // upply doAbs to integers
    iter(integers, sizeof(integers) / sizeof(int), doAbs);

    std::cout << BOLD_GREEN << "integers afer   : ";
    displayInt(integers, sizeof(integers) / sizeof(int));
    std::cout << RESET;

    std::cout << "\n" << spliter << "\n\n";
    std::cout << BOLD_GREEN << "done!\n";
    return (0);
}
