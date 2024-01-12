CC = c++
CPPFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp BitcoinExchange.cpp
OBJ = ${SRC:.cpp=.o}
NAME = btc

all : $(NAME)

%.o		:	%.cpp BitcoinExchange.hpp
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ) BitcoinExchange.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all