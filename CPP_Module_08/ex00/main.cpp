#include "easyfind.hpp"

const char* NotFoundException::what() const throw() {
    return ("not found!");
}

template <typename T>
void display(T &container, std::string name) {
    std::cout << BOLD_YELLOW;
    std::cout << name << " = [";
    
    for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {
        if (it != container.begin()) std::cout << ", ";
        std::cout << *it;
    }
    std::cout << "]\n";
    std::cout << RESET;
}

/*
    vector
*/

int main() {
    std::vector<int> v;

    v.push_back(/*test*/2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);

    display(v, "vector v");

    int target = 1;

    try {
        std::vector<int>::const_iterator it = easyfind(v, target);
        std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
    }

    target = 5;

    try {
        std::vector<int>::const_iterator it = easyfind(v, target);
        std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
    }

    return (0);
}

/*
    deque
*/

// int main() {
//     std::deque<int> dq;

//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_front(10);

//     display(dq, "deque dq");

//     int target = 10;

//     try {
//         std::deque<int>::const_iterator it = easyfind(dq, target);
//         std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
//     }

//     target = 5;

//     try {
//         std::deque<int>::const_iterator it = easyfind(dq, target);
//         std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
//     }

//     return (0);
// }


/*
    list
*/

// int main() {
//     std::list<int> lst;

//     lst.push_back(20);
//     lst.push_back(30);
//     lst.push_front(10);

//     display(lst, "list lst");
//     int target = 5;

//     try {
//         std::list<int>::const_iterator it = easyfind(lst, target);
//         std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
//     }

//     target = 10;

//     try {
//         std::list<int>::const_iterator it = easyfind(lst, target);
//         std::cout << BOLD_GREEN << *it << " found\n" << RESET;  
//     } catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << target << " " << e.what() << "\n" << RESET;
//     }

//     return (0);
// }
