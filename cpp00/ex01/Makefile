# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:04:47 by jingchen          #+#    #+#              #
#    Updated: 2024/09/01 18:24:07 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

SRC	=	PhoneBook.cpp \
		Contact.cpp \
		main.cpp
OBJS			= $(SRC:.cpp=.o)

# Compiler
CXX				=	c++
RM				=	rm -f
CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

# Rules
all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re