NAME = megaphone
SRC = megaphone.cpp
OBJ	= $(SRC:.cpp=.o)

CC = c++
RM = rm -f
CPPFLAGE = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGE) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re