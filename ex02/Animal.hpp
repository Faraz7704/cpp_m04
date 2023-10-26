/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:09:38 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:25:12 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);

    virtual ~Animal(void);

    Animal(const Animal& src);
    Animal& operator=(const Animal& rhs);

    virtual void    makeSound(void) const;
    std::string     getType(void) const; 
};

#endif