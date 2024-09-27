/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:31:27 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:33:25 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &assigned);
	virtual ~AMateria();

	AMateria(std::string const &type);
	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif