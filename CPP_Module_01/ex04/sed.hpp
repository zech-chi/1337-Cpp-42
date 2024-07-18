/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:36:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 18:29:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>

# define RESET	"\033[0m"
# define YELLOW	"\033[1;33m"
# define RED	"\033[1;31m"
# define ORANGE	"\033[38;5;214m"
# define GREEN	"\033[32m"

std::string	sed(std::string line, std::string strFrom, std::string strTo);

#endif