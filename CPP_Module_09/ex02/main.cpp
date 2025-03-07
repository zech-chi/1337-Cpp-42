#include "PmergeMe.hpp"

int main(int ac, char **av) {
    try {
        PmergeMe pmm(ac, av);
        // pmm.sort();
        pmm.display();
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << e.what() << RESET;
    }
    DEBUG && std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
