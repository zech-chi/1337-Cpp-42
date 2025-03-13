#include "PmergeMe.hpp"

/*
    debug
*/
// void    displayJacobsthalSequence() {
//     for (size_t i = 1; i <= 100; i++) 
//     {
//         std::cout << i << ": ";
//         std::vector<size_t> seqJ = generateJacobsthalSequence(i);
//         for (size_t j = 0; j < seqJ.size(); j++)
//             std::cout << seqJ[j] << " ";
//         std::cout << "\n\n";
//     }
// }



// int main() {
//     displayJacobsthalSequence();
//     return (0);
// }

int main(int ac, char **av) {
    try {
        PmergeMe pmm(ac, av);
        pmm.sort();
        // pmm.display();
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << e.what() << RESET;
    }
    DEBUG && std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
