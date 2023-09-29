CC = c++
FLAGS = -Wall -Wextra -Werror
SRC =  zombieHorde.cpp Zombie.cpp main.cpp	
OBJ = ${SRC:.cpp=.o}
NAME  = Zombie 

all : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all