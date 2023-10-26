# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 23:07:07 by fkhan             #+#    #+#              #
#    Updated: 2023/10/26 23:59:58 by fkhan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= main
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR 		= .objects/

FILES		= main AMateria Character Cure Ice MateriaSource

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR), $(FILES:=.o))
HEADER		= AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean re fclean bonus norm