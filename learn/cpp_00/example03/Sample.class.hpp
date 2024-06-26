/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:27:12 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 12:52:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{
public:
	float const	pi;
	int			qd;

	Sample(float const f);
	~Sample(void);

	void	bar(void) const;
};

#endif
