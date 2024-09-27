/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:44:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:45:15 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_learnedMaterias[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &assign);
	~MateriaSource();

	void learnMateria(AMateria *lesson);
	AMateria *createMateria(std::string const &type);
};

#endif