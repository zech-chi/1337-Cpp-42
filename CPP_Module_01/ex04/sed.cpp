/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:55:26 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 18:57:14 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	sed(std::string line, std::string strFrom, std::string strTo)
{
	size_t		position;
	std::string	replacedLine;

	position = line.find(strFrom);
	if (position == std::string::npos)
		return (line);
	while (position != std::string::npos)
	{
		replacedLine = line.substr(0, position) + strTo + line.substr(position + strFrom.length());
		position = line.find(replacedLine);
	}
	return (replacedLine);
}
