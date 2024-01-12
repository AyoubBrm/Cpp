CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp RPN.cpp
OBJ = ${SRC:.cpp=.o}
NAME = RPN

all : $(NAME)

%.o		:	%.cpp RPN.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) RPN.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all