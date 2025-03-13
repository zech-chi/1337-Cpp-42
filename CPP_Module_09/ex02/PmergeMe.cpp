#include "PmergeMe.hpp"

size_t  Jacobsthal(size_t n) {
    if (n <= 1)
        return (n);
    size_t  prevJ1 = 1;
    size_t  prevJ2 = 0;
    size_t  curJ;

    for (size_t i = 2; i <= n; i++) {
        curJ = prevJ1 + 2 * prevJ2;
        prevJ2 = prevJ1;
        prevJ1 = curJ;
    }

    return (curJ);
}

std::vector<size_t> generateJacobsthalSequence(size_t size) {
    std::vector<size_t> seqJ(size - 1);
    size_t  indexJ = 3;
    size_t  prevJ = Jacobsthal(2);
    size_t  curJ = Jacobsthal(3);
    size_t  indexI = 0;
    size_t  curI = curJ;

    while (curJ <= size) {

        while (curI > prevJ) {
            seqJ[indexI++] = curI--;
        }

        prevJ = curJ;
        curJ = Jacobsthal(++indexJ);
        curI = curJ;
    }

    curI = size;
    while (curI > prevJ) {
        seqJ[indexI++] = curI--;
    }

    return (seqJ);
}

PmergeMe::PmergeMe() {
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe default constructor;\n" << RESET;
}

PmergeMe::PmergeMe(const PmergeMe& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe copy constructor;\n" << RESET;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe copy assignement;\n" << RESET;
    return (*this);
}

PmergeMe::~PmergeMe() {
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe destructor;\n" << RESET;
}


void    PmergeMe::display() const {
    std::cout << BOLD_RED << "Before: " << RESET;
    for (size_t i = 0; i < _vBefore.size(); i++)
        std::cout << _vBefore[i] << " ";
    std::cout << "\n";

    std::cout << BOLD_GREEN << "After : " << RESET;
    for (size_t i = 0; i < _vAfter.size(); i++)
        std::cout << _vAfter[i] << " ";
    std::cout << "\n";

    std::cout << "Time to process a range of " << BOLD_YELLOW << _vBefore.size() << RESET << " elements with std::vector : " << BOLD_YELLOW << _vecTime << RESET << " µs\n";
    std::cout << "Time to process a range of " << BOLD_YELLOW << _dBefore.size() << RESET << " elements with std::vector : " << BOLD_YELLOW << _deqTime << RESET << " µs\n";
}

std::vector<int> PmergeMe::sortVec(std::vector<int> items) {
    if (items.size() < 2)
        return (items);

    std::vector<int> main, pend;
    int lastItem = -1;

    for (size_t i = 1; i < items.size(); i += 2) {
        if (items[i] > items[i - 1]) {
            main.push_back(items[i]);
            pend.push_back(items[i - 1]);
        } else {
            main.push_back(items[i - 1]);
            pend.push_back(items[i]);
        }
    }
    if (items.size() % 2)
        lastItem = items.back();

    main = sortVec(main);
    if (lastItem != -1)
        pend.push_back(lastItem);

    std::vector<size_t> seqJ = generateJacobsthalSequence(pend.size());
    seqJ.push_back(1);
    int     item;

    for (size_t j = 0; j < seqJ.size(); j++) {
        item = pend[seqJ[j] - 1];
        std::vector<int>::iterator it = std::upper_bound(main.begin(), main.end(), item);
        main.insert(it, item);
    }

    return (main);
}

std::deque<int> PmergeMe::sortDeq(std::deque<int> items) {
    if (items.size() < 2)
        return (items);

    std::deque<int> main, pend;
    int lastItem = -1;

    for (size_t i = 1; i < items.size(); i += 2) {
        if (items[i] > items[i - 1]) {
            main.push_back(items[i]);
            pend.push_back(items[i - 1]);
        } else {
            main.push_back(items[i - 1]);
            pend.push_back(items[i]);
        }
    }
    if (items.size() % 2)
        lastItem = items.back();

    main = sortDeq(main);
    if (lastItem != -1)
        pend.push_back(lastItem);

    std::vector<size_t> seqJ = generateJacobsthalSequence(pend.size());
    seqJ.push_back(1);
    int     item;

    for (size_t j = 0; j < seqJ.size(); j++) {
        item = pend[seqJ[j] - 1];
        std::deque<int>::iterator it = std::upper_bound(main.begin(), main.end(), item);
        main.insert(it, item);
    }

    return (main);
}


void    PmergeMe::sort(int ac, char **av) {
    struct timeval tStart, tEnd;

    /*
        * vector
    */
    if (gettimeofday(&tStart, NULL))
        throw std::runtime_error("Error\n");

    for (int i = 1; i < ac; i++) {
        std::string token = av[i];
        std::istringstream  iss(token);
        int z;
        iss >> z;
        if (iss.fail() || !iss.eof() || z < 0)
            throw std::runtime_error("Error\n");
        _vBefore.push_back(z);
    }
    _vAfter = sortVec(_vBefore);

    if (gettimeofday(&tEnd, NULL))
        throw std::runtime_error("Error\n");
    _vecTime = (tEnd.tv_sec - tStart.tv_sec) * 1e6 + (tEnd.tv_usec - tStart.tv_usec);

    /*
        * deque
    */
    if (gettimeofday(&tStart, NULL))
        throw std::runtime_error("Error\n");

    for (int i = 1; i < ac; i++) {
        std::string token = av[i];
        std::istringstream  iss(token);
        int z;
        iss >> z;
        if (iss.fail() || !iss.eof() || z < 0)
            throw std::runtime_error("Error\n");
        _dBefore.push_back(z);
    }
    _dAfter = sortDeq(_dBefore);

    if (gettimeofday(&tEnd, NULL))
        throw std::runtime_error("Error\n");
    _deqTime = (tEnd.tv_sec - tStart.tv_sec) * 1e6 + (tEnd.tv_usec - tStart.tv_usec);

}
