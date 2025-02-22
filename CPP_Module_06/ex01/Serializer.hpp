#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include<iostream>

// Bold Text Color
#define BOLD_BLACK "\033[1;30m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN "\033[1;36m"
#define BOLD_WHITE "\033[1;37m"

// Reset Color
#define RESET "\033[0m"

struct Data
{
    std::string movieTitle;
    std::string movieDirector;
    int         movieReleaseYear;
    float       movieRating;
};

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer& other);
        Serializer& operator = (const Serializer& other);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
