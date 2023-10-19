CC = c++
FLAGS = -Wextra -Werror -Wall -std=c++98
SRC = Amateria.cpp main.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 
OBJ = ${SRC:.cpp=.o}
NAME = Character

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all