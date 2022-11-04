NAME = Bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror-std=c++98 -g
INC = Bureaucrat.hpp Form.hpp
SRC = main.cpp Bureaucrat.cpp Form.cpp
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