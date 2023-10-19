CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
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