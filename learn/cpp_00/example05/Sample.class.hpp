/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:27:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 13:04:12 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {

	public:
		int	publicFoo;

		Sample(void);
		~Sample(void);
		void	publicBar(void) const;

	private:
		int	_privateFoo;

		void	_privateBar(void) const;

};

#endif
