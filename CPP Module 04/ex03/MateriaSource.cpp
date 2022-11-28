/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:55:06 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/28 22:55:07 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource( void )
{
	int m_number_learned = 0;
	int m_materias[4];
	for (int i = 0; i < m_materias[i]; i++)
		this->m_materias[i] = NULL;
	std::cout << "Default constructor for MateriaSource called" << std::endl;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	std::cout << "Copy constructor for IMateriaSource called" << std::endl;
	*this = src;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materias[i])
			delete this->m_materias[i];
	}
	std::cout << "Destructor for MateriaSource called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materias[i])
			this->m_materias[i] = rhs.m_materias[i];
		else
			this->m_materias[i] = NULL;
	}
	std::cout << "Assignement operator for MateriaSource called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
*/

void		MateriaSource::learnMateria(AMateria *materia_to_learn)
{
	int learn;

	learn = 0;
	for (int i = 0; i < 4; i++)
	{
		if (learn == 0 && this->m_materias[i] == NULL)
		{
			this->m_materias[i] = materia_to_learn;
			learn++;
		}
	}
	if (learn == 0)
		std::cout << "Not enough space left for MateriaSource" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materias[i] != NULL 
			&& this->m_materias[i]->getType() == type)
		{
			AMateria *cpy;

			cpy = this->m_materias[i]->clone();
			return (cpy);
		}
	}
	std::cout << "MateriaSource not found." << std::endl;
	return NULL;
}

