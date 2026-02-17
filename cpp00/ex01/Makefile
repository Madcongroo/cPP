# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 15:35:41 by bproton           #+#    #+#              #
#    Updated: 2026/02/17 09:11:30 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCDIR	=	include/
SRCDIR	=	src/
SRC		=	$(SRCDIR)main.cpp $(SRCDIR)My_PhoneBook.cpp $(SRCDIR)Contact.cpp
INCL	=	$(INCDIR)Contact.hpp $(INCDIR)My_PhoneBook.hpp

OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: clean flcean