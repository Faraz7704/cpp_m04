/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:56:44 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:46 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef INV_SIZE
	#define INV_SIZE 4
#endif

#ifndef CHARACTER_H
	#define CHARACTER_H
	class Character: public ICharacter
	{
		private:
			std::string	name;
			AMateria	**inventory;
		public:
			Character(void);
			Character(const Character & src);
			Character(std::string const name);
			Character	&operator=(Character const & src);
			~Character(void);
			std::string const & getName() const;
			void	equip(AMateria* m);
			void	unequip(int idx);
			void	use(int idx, ICharacter & target);
	};
#endif
