CC = c++
FLAGS = -Wall -Wextra -Werror
SRC =  zombieHorde.cpp Zombie.cpp main.cpp -std=c++98
OBJ = ${SRC:.cpp=.o}
NAME  = Zombie 

all : ${NAME}

$(NAME) : $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all