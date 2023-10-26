/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:30:31 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    try
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Dog::~Dog(void)
{
    delete  this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(const Dog& src)
{
    *this = src;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}