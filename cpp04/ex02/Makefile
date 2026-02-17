# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 15:20:29 by bproton           #+#    #+#              #
#    Updated: 2026/02/17 09:15:47 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	DerivedBrain
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCDIR	=	include/
SRCDIR	=	src/
SRC		=	$(SRCDIR)main.cpp $(SRCDIR)Animal.cpp $(SRCDIR)Cat.cpp $(SRCDIR)Dog.cpp $(SRCDIR)Brain.cpp $(SRCDIR)WrongAnimal.cpp $(SRCDIR)WrongCat.cpp
INCL	=	$(INCDIR)Animal.hpp $(INCDIR)Cat.hpp $(INCDIR)Dog.hpp $(INCDIR)Brain.hpp $(INCDIR)WrongAnimal.hpp $(INCDIR)WrongCat.hpp
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