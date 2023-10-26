/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:19:33 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}