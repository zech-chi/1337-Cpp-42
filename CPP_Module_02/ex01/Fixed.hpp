/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:44:16 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/22 11:45:30 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed {

	public:
		Fixed();
		Fixed( const int d );
		Fixed( const float f );
		Fixed( const Fixed& origine);
		Fixed& operator = ( const Fixed& origine );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_val;
		static const int	_bits;
};

std::ostream& operator << (std::ostream& out, const Fixed& f);

#endif
