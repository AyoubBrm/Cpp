CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98 #-fsanitize=address -g
SRC = main.cpp 
OBJ = ${SRC:.cpp=.o}
NAME = iter

all : $(NAME)

%.o		:	%.cpp iter.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) iter.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all