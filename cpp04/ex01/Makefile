# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 19:42:18 by jingchen          #+#    #+#              #
#    Updated: 2024/09/29 13:52:30 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
SRC = main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGES = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGES) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re