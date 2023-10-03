CC = c++
FLAGS = -Wall -Wextra -Werror
SRC =  Weapon.cpp HumanA.cpp HumanB.cpp main.cpp -std=c++98
OBJ = ${SRC:.cpp=.o}
NAME  = Human 

all : ${NAME}

$(NAME) : $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all