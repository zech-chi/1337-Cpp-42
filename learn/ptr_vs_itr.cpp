#include <iostream>
#include <vector>
#include <list>

int main() {
    // Using std::vector (contiguous container)
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Pointer: Works with contiguous containers
    int* ptr = &vec[0];
    std::cout << "Using pointer (std::vector): ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << *(ptr + i) << " ";  // Pointer arithmetic works
    }
    std::cout << std::endl;

    // Iterator: Also works with contiguous containers
    std::cout << "Using iterator (std::vector): ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";  // Dereferencing the iterator works
    }
    std::cout << std::endl;

    // Using std::list (non-contiguous container)
    std::list<int> lst = {100, 200, 300, 400, 500};

    // Pointer: Does not work with non-contiguous containers
    // This won't work because we cannot do pointer arithmetic with std::list:
    // int* ptr_list = &lst.front();  // Error! `ptr_list` cannot use pointer arithmetic

    // Iterator: Works with non-contiguous containers
    std::cout << "Using iterator (std::list): ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";  // Iterators work with non-contiguous containers
    }
    std::cout << std::endl;

    return 0;
}
