/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:09:38 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:16:36 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal(void);
    WrongAnimal(std::string type);
    ~WrongAnimal(void);

    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& rhs);

    void            makeSound(void) const;
    std::string     getType(void) const; 
};

#endif