/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:27:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:26:15 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{
public:
	char	a;
	int		b;
	float	c;

	Sample(char a, int b, float c);
	~Sample(void);

	void	print(void);
};

#endif
