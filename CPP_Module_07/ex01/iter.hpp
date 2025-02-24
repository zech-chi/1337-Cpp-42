/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:01:51 by zech-chi          #+#    #+#             */
/*   Updated: 2025/02/24 17:01:52 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

template <typename T>
void    iter(T *array, size_t len, void (*ft)(T &)) {
    if (!array || !ft) {
        std::cerr << BOLD_RED << "something wrong!\n";
        return ;
    }

    for (size_t i = 0; i < len; i++) {
        ft(array[i]);
    }
}

#endif
