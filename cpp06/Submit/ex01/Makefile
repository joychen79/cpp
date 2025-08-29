# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/23 18:07:30 by jingchen          #+#    #+#              #
#    Updated: 2025/08/29 18:17:17 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
      Serializer.cpp \
      Data.cpp

OBJ = $(SRC:.cpp=.o)

NAME = convert

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re