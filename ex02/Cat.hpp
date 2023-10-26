/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:11:25 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:33:09 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain   *_brain;

public:
    Cat(void);
    ~Cat(void);

    Cat(const Cat& src);
    Cat& operator=(const Cat& src);

    void   makeSound(void) const;
};

#endif