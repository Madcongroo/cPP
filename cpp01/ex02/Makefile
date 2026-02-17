# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 11:13:02 by proton            #+#    #+#              #
#    Updated: 2026/02/17 09:37:38 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCDIR	=	src/
SRC		=	$(SRCDIR)main.cpp
OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: clean flcean