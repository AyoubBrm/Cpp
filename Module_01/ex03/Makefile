CC = c++
FLAGS = -Wall -Wextra -Werror
SRC =  Weapon.cpp HumanA.cpp HumanB.cpp main.cpp	
OBJ = ${SRC:.cpp=.o}
NAME  = Human 

all : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all