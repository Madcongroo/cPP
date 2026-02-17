# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 22:53:54 by proton            #+#    #+#              #
#    Updated: 2026/02/17 09:24:30 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Frag
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCDIR	=	include/
SRCDIR	=	src/
SRC		=	$(SRCDIR)main.cpp $(SRCDIR)ClapTrap.cpp $(SRCDIR)ScavTrap.cpp $(SRCDIR)FragTrap.cpp
INCL	=	$(INCDIR)ClapTrap.hpp $(INCDIR)ScavTrap.hpp $(INCDIR)FragTrap.hpp
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