#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    std::cout << std::time(0) << "\n";
    std::srand(std::time(0)); // Seed the random number generator with current time


    int randomNumber = std::rand();  // Generates a random number
    std::cout << "Random number: " << randomNumber << std::endl;

    // Generate a random number in a specific range [min, max]
    int min = 1, max = 100;
    int randomInRange = min + std::rand() % (max - min + 1);
    std::cout << "Random number in range [" << min << ", " << max << "]: " << randomInRange << std::endl;

    return 0;
}
