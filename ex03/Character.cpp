/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:56:38 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:49 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("Anonymous Character"), inventory(new AMateria*[INV_SIZE])
{
	std::cout << "Character default constructor called." << std::endl;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(const Character & src) : name(src.getName()), inventory(new AMateria*[INV_SIZE])
{
	std::cout << "Character copy constructor called." << std::endl;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		inventory[i] = src.inventory[i]->clone();
	}
}

Character::Character(std::string const name) : name(name), inventory(new AMateria*[INV_SIZE])
{
	std::cout << "Character string constructor called." << std::endl;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		inventory[i] = NULL;
	}
}

Character &	Character::operator=( Character const & src)
{
	if (this != & src)
	{
		for (size_t i = 0; i < INV_SIZE; i++)
		{
			if (inventory[i] != NULL)
				delete inventory[i];
			inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor called." << std::endl;
	for (size_t i = 0; i < INV_SIZE; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	delete [] inventory;
}

std::string const & Character::getName() const
{
	return (this->name);
};

void	Character::equip(AMateria* m)
{
	size_t	i;

	i = 0;
	if (!m)
		return ;
	while (i < INV_SIZE)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
		i++;
	}
	inventory[i] = m;
}

void	Character::unequip(int idx)
{
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < INV_SIZE && inventory[idx])
		inventory[idx]->use(target);
}
