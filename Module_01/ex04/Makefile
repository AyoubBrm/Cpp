CC = c++
FLAGS = -Wextra -Wall -Werror -std=c++98
SRC = File.cpp main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = FILE

all : ${NAME}

$(NAME) : $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all