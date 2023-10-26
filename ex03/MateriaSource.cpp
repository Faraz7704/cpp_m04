/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:57:32 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:16 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : materia_source(new AMateria*[SOURCE_SIZE])
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (size_t i = 0; i < SOURCE_SIZE; i++)
	{
		materia_source[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & source) : materia_source(new AMateria*[SOURCE_SIZE])
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (size_t i = 0; i < SOURCE_SIZE; i++)
	{
		materia_source[i] = source.materia_source[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & source)
{
	size_t	i;

	if (this != &source)
	{
		for (i = 0; i < SOURCE_SIZE; i++)
		{
			if (materia_source[i])
				delete materia_source[i];
			materia_source[i] = source.materia_source[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < SOURCE_SIZE; i++)
	{
		if (materia_source[i])
			delete materia_source[i];
	}
	delete [] materia_source;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < SOURCE_SIZE; i++)
	{
		if (!materia_source[i])
		{
			materia_source[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	size_t	i;

	for (i = 0; i < SOURCE_SIZE; i++)
	{
		if (materia_source[i] && materia_source[i]->getType() == type)
			return (materia_source[i]->clone());
	}
	return (NULL);
}

