/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 15:28:27 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain copy called." << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}