CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp span.cpp
OBJ = ${SRC:.cpp=.o}
NAME = span

all : $(NAME)

%.o		:	%.cpp span.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) span.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all