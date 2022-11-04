NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INC = Convert.hpp 
SRC = main.cpp Convert.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all