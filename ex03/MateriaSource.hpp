/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:57:37 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/27 00:07:15 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

#ifndef SOURCE_SIZE
	#define SOURCE_SIZE 4
#endif

#ifndef MATERIA_SOURCE_H
	#define MATERIA_SOURCE_H
	class MateriaSource: public IMateriaSource
	{
		private:
			AMateria	**materia_source;
		public:
			MateriaSource(void);
			MateriaSource(MateriaSource const & source);
			MateriaSource	&operator=(MateriaSource const & source);
			~MateriaSource(void);
			void learnMateria(AMateria *m);
			AMateria* createMateria(std::string const & type);
	};
#endif
