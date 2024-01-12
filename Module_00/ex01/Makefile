CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp Contact.cpp main.cpp 
OBJ = ${SRC:.cpp=.o}
NAME  = phoneBook

all : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

make re : fclean all