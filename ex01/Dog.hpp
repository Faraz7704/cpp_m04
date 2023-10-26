/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:11:25 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:31:56 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *_brain;

public:
    Dog(void);
    ~Dog(void);

    Dog(const Dog& src);
    Dog& operator=(const Dog& src);

    void   makeSound(void) const;
};

#endif