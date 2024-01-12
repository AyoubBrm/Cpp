CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address -g
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = easyfind

all : $(NAME)

%.o		:	%.cpp easyfind.hpp easyfind.tpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) easyfind.hpp easyfind.tpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all