/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:13:38 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}