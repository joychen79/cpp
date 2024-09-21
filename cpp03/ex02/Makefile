# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 17:03:12 by jingchen          #+#    #+#              #
#    Updated: 2024/09/21 18:42:49 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp\
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		
OBJ = $(SRC:.cpp=.o)

NAME = FragTrap

CXX = g++

CXXFLAGES = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGES) $(OBJ) -o $(NAME)
		
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re