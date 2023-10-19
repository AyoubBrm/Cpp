CC = c++
FLAGS = -Wextra -Werror -Wall -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp
OBJ = ${SRC:.cpp=.o}
NAME = ScavTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all