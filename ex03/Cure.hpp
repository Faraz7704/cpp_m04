/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:56:57 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:37 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_H
	#define CURE_H
	class Cure: public AMateria
	{
		public:
			Cure(void);
			Cure(const Cure & src);
			Cure	&operator=(Cure const & src);
			~Cure(void);
			AMateria* clone() const;
			void use(ICharacter & target);
	};
#endif
