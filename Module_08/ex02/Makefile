CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = MutantStack

all : $(NAME)

%.o		:	%.cpp MutantStack.tpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) MutantStack.tpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all