# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 14:26:10 by bproton           #+#    #+#              #
#    Updated: 2026/02/17 09:37:54 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCDIR	=	include/
SRCDIR	=	src/
SRC		=	$(SRCDIR)main.cpp
INCL	=	$(INCDIR)main.hpp
OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: clean flcean