/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:57:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:31 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src.getType())
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice &	Ice::operator=(Ice const & src)
{
	(void)src;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
};

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
