# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 16:39:07 by gtrinida          #+#    #+#              #
#    Updated: 2022/10/24 15:42:19 by gtrinida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = useless
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
INCLUDES = Fixed.hpp
SRCS = main.cpp Fixed.cpp
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
