#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			this->_learnedMaterias[i] = copy._learnedMaterias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assigned)
{
	if (this != &assigned)
	{
		for (int i = 0; i < 4; i++)
			this->_learnedMaterias[i] = assigned._learnedMaterias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i])
			delete this->_learnedMaterias[i];
	}
}

/* Methods form interface */

void MateriaSource::learnMateria(AMateria *lesson)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i] == NULL && lesson)
		{
			this->_learnedMaterias[i] = lesson->clone();
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *knowledge = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i] &&
			this->_learnedMaterias[i]->getType() == type)
		{
			knowledge = this->_learnedMaterias[i]->clone();
			break;
		}
	}
	if (knowledge)
		return knowledge;
	return 0;
}