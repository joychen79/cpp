# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 17:03:12 by jingchen          #+#    #+#              #
#    Updated: 2024/09/20 17:28:59 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp\
		ClapTrap.cpp \
	
OBJ = $(SRC:.cpp=.o)

NAME = ClapTrap

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