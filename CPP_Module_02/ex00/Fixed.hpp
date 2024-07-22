/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:16 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/22 11:13:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed {

	public:
		Fixed();
		Fixed( const Fixed& origine);
		Fixed& operator=( const Fixed& origine );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					_val;
		static const int	_bits;
};

#endif
