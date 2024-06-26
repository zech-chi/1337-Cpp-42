/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:27:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 18:04:46 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {

	public:

		Sample(void);
		~Sample(void);
		int		getFoo(void) const;
		void	setFoo(int newFoo);

	private:

	int	_foo;

};

#endif
