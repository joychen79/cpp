# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 19:47:01 by jingchen          #+#    #+#              #
#    Updated: 2024/09/29 13:53:20 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC	=	main.cpp \
		AMateria.cpp \
		Character.cpp \
		MateriaSource.cpp \
		Cure.cpp \
		Ice.cpp
OBJS			= $(SRC:.cpp=.o)

CXX				=	c++

CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98 

NAME			=	materia

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re