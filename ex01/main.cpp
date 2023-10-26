/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:03:54 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:38:24 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Dog basic;
    Dog tmp = basic;

    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    return 0;
}