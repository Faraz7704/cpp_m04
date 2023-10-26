/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:56:29 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:52 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string.h>
#include "ICharacter.hpp"

#ifndef A_MATERIA_H
	#define A_MATERIA_H
	class AMateria
	{
		protected:
			std::string	type;
		public:
			AMateria(void);
			AMateria(std::string const & src);
			virtual ~AMateria(void);
			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter & target);
	};
#endif
