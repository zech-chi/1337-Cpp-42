/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:01:55 by zech-chi          #+#    #+#             */
/*   Updated: 2025/02/26 10:27:14 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void display(T &x ) {
    std::cout << x << std::endl;
    return ;
}

int main() {
    std::string spliter(42, '$');

    char str[] = "zech-chi";

    std::cout << "\n" << spliter << "\n";
    iter(str, sizeof(str), display<char>);

    std::cout << "\n" << spliter << "\n";

    int integers[] = {-1, -7, 1337};
    iter(integers, sizeof(integers) / sizeof(int), display<int>);

    std::cout << "\n" << spliter << "\n";
    
    double doubles[] = {-1.55, -7.16, 1337.42};
    iter(doubles, sizeof(doubles) / sizeof(double), display<const double>);

    std::cout << "\n" << spliter << "\n";
    std::cout << BOLD_GREEN << "done!\n";
    return (0);
}
