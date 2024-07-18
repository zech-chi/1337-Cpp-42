/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:45:54 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 11:29:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNINING");
	h.complain("ERROR");

	return (0);
}
