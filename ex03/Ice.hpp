/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:57:09 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:28 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_H
	#define ICE_H
	class Ice: public AMateria
	{
		public:
			Ice(void);
			Ice(const Ice & src);
			Ice	&operator=(Ice const & src);
			~Ice(void);
			AMateria* clone() const;
			void use(ICharacter & target);
	};
#endif
