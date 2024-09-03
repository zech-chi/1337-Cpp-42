/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:48:56 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/02 21:13:56 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *store[4];
        int         index;

    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource& operator=(MateriaSource const &other);
        ~MateriaSource();

        void    learnMateria(AMateria* materia);
        AMateria *createMateria(std::string const &type);
        void    print();
};
