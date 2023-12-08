CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address -g
SRC = main.cpp 
OBJ = ${SRC:.cpp=.o}
NAME = whatever

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all