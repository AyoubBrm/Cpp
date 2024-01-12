CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp PmergeMe.cpp
OBJ = ${SRC:.cpp=.o}
NAME = PmergeMe

all : $(NAME)

%.o		:	%.cpp PmergeMe.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) PmergeMe.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all