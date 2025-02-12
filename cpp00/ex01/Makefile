# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bproton <bproton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 15:35:41 by bproton           #+#    #+#              #
#    Updated: 2025/02/12 13:28:08 by bproton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp My_PhoneBook.cpp Contact.cpp

OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: clean flcean