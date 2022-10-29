NAME = ScavTrap
CC = c++
CFLAGS = -Wall -Werror -std=c++98 -g
INC = ClapTrap.hpp ScavTrap.hpp 
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
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