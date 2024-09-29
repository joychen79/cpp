# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:33:38 by jingchen          #+#    #+#              #
#    Updated: 2024/09/29 13:43:34 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		
OBJ = $(SRC:.cpp=.o)

NAME = zombie

CXX = c++

CXXFLAGE = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGE) $(OBJ) -o $(NAME)

clean: 
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re
