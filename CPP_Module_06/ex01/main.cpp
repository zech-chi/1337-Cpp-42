#include "Serializer.hpp"

void    display(const Data& movie) {
    std::cout << BOLD_YELLOW << "\tTitle        : " << BOLD_WHITE << movie.movieTitle << "\n";
    std::cout << BOLD_YELLOW << "\tDirector     : " << BOLD_WHITE << movie.movieDirector << "\n";
    std::cout << BOLD_YELLOW << "\tRelease Year : " << BOLD_WHITE << movie.movieReleaseYear << "\n";
    std::cout << BOLD_YELLOW << "\tRating       : " << BOLD_WHITE << movie.movieRating << "/10\n";
    std::cout << RESET;
}

int main() {
    Data movie;
    {
        movie.movieTitle = "Parasite";
        movie.movieDirector = "Bong Joon-ho";
        movie.movieReleaseYear = 2019;
        movie.movieRating = 8.6;
    }

    std::cout << BOLD_BLUE << "serialize ...\n" << RESET;
    uintptr_t   raw = Serializer::serialize(&movie);

    std::cout << "\n" << "raw = " << raw << "\n\n";
    // raw++;

    std::cout << BOLD_BLUE << "deserialize ...\n" << RESET;
    Data*       parasite = Serializer::deserialize(raw);

    std::cout << BOLD_MAGENTA << "address of movie   : " << &(movie) << "\n" << RESET;
    std::cout << BOLD_MAGENTA << "address of parasite: " << parasite << "\n" << RESET;

    std::cout << "movie data    = {\n"; display(movie); std::cout << "}\n\n";
    std::cout << "parasite data = {\n"; display(*parasite); std::cout << "}\n\n";

    std::cout << BOLD_GREEN << "done!\n";
    return (0);
}