/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:55:26 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 15:39:06 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string sed(std::string line, const std::string& strFrom, const std::string& strTo)
{
	size_t position = line.find(strFrom);
	std::string replacedLine;

	while (position != std::string::npos)
	{
		replacedLine += line.substr(0, position) + strTo;
		line = line.substr(position + strFrom.length());
		position = line.find(strFrom);
	}
	replacedLine += line;
	return replacedLine;
}
