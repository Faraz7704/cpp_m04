/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:30:01 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
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

Cat::~Cat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete  this->_brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat(const Cat& src)
{
    *this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}