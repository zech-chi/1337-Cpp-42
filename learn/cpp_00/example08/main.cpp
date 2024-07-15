#include <iostream>
#include <iomanip>

// int main() {
//     int width = 10; // Width of each cell
//     int numCells = 4; // Number of cells

//     std::cout << "+" ;
//     for (int i = 0; i < numCells; ++i) {
//         std::cout << "----------+";
//     }
//     std::cout << std::endl;

//     for (int i = 0; i < numCells; ++i) {
//         std::cout << "|" << std::setw(width) << std::left << "";
//     }
//     std::cout << "|" << std::endl;

//     return 0;
// }


int main()
{
    std::cout << std::setw(5) << std::right << "abcde" << std::endl;
    return (0);
}
