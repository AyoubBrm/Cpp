CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp	
OBJ = ${SRC:.cpp=.o}
NAME  = Brain 

all : ${NAME}

$(NAME) : $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all