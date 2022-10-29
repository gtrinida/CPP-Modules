# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 22:25:40 by gtrinida          #+#    #+#              #
#    Updated: 2022/10/23 03:18:05 by gtrinida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
INCLUDES = Harl.hpp
SRCS = main.cpp Harl.cpp
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