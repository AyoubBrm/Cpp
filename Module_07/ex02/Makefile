CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address -g
SRC = $(wildcard *.cpp)
OBJ = ${SRC:.cpp=.o}
NAME = Array

all : $(NAME)

$(NAME) : $(OBJ) Array.hpp Array.tpp
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all