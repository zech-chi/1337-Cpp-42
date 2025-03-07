#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    try {
        if (ac != 2)
            throw std::runtime_error("Error: (usage: ./btc <input_file>)\n");
        BitcoinExchange btc;
        std::string inputFilePath = av[1];
        btc.btc(inputFilePath);
    } catch (std::exception &e) {
        std::cout << BOLD_RED << e.what() << RESET;
        return (1);
    }

    DEBUG && std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
