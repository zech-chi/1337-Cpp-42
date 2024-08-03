/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:06:01 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/03 12:12:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Brain
{
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		Brain( const Brain& origine );
		Brain& operator=( const Brain& origine );
		~Brain();
	
		void	setIdea( std::string idea, int index );
		std::string	getIdea( int index ) const;
		void		printIdeas() const;
};
