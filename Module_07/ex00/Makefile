CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address -g
SRC = main.cpp 
OBJ = ${SRC:.cpp=.o}
NAME = whatever

all : $(NAME)

%.o		:	%.cpp whatever.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) whatever.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all