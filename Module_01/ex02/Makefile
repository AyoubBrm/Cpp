CC = c++
FLAGS = -Wall -Wextra -Werror
SRC =  main.cpp	
OBJ = ${SRC:.cpp=.o}
NAME  = Brain 

all : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all