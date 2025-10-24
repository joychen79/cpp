# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 19:41:10 by jingchen          #+#    #+#              #
#    Updated: 2025/10/24 16:53:10 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = easyfind.cpp\
	main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = EasyFind

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re