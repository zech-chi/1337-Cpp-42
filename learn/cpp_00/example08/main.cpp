#include <iostream>
#include <iomanip>  // For std::setw, std::right, std::left

int main() {
    // Define some example data
    const int numEntries = 3;
    std::string firstName[numEntries] = {"John", "Jane", "Doe"};
    std::string lastName[numEntries] = {"Doe", "Smith", "Johnson"};
    std::string nickname[numEntries] = {"Johnny", "Janey", "DJ"};
    int index[numEntries] = {0, 1, 2};

    // Print table header with left alignment for names
    std::cout << std::setw(10) << std::right << "Index"
              << std::setw(15) << std::left << "First Name"
              << std::setw(20) << std::left << "Last Name"
              << std::setw(25) << std::left << "Nickname"
              << std::endl;

    // Print a separator line
    std::cout << std::setw(10) << std::right << "--------"
              << std::setw(15) << std::left << "---------------"
              << std::setw(20) << std::left << "--------------------"
              << std::setw(25) << std::left << "-------------------------"
              << std::endl;

    // Print data rows
    for (int i = 0; i < numEntries; ++i) {
        std::cout << std::setw(10) << std::right << index[i]
                  << std::setw(15) << std::left << firstName[i]
                  << std::setw(20) << std::left << lastName[i]
                  << std::setw(25) << std::left << nickname[i]
                  << std::endl;
    }

    return 0;
}
