NAME = violence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = Weapon.hpp HumanB.hpp HumanA.hpp
SRCS = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re