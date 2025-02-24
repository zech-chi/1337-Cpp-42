#include <iostream>
#include <iomanip>  // For std::fixed and std::setprecision

int main() {
    double number = 12334823478234823.456789;
    
    // Without std::fixed
    std::cout << number << std::endl;  // Might display: 123.457 (or in scientific notation)
    
    // With std::fixed
    std::cout << std::setprecision(2) << number << std::endl;
    std::cout << std::fixed << number << std::endl;  // Displays: 123.456789
    std::cout << std::fixed << std::setprecision(2) << number << std::endl;  // Displays: 123.456789
    
    return 0;
}
