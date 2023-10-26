/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:56:51 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:42 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src.getType())
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure &	Cure::operator=(Cure const & src)
{
	(void)src;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
};

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
