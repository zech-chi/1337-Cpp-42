/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:50:47 by zech-chi          #+#    #+#             */
/*   Updated: 2025/02/24 15:50:48 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y) {
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
const T& min(const T& x, const T& y) {
    if (x >= y)
        return y;
    return x;
}

template <typename T>
const T& max(const T& x, const T& y) {
    if (x <= y)
        return y;
    return x;
}

#endif
