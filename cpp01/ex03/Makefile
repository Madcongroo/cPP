# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bproton <bproton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 13:57:44 by bproton           #+#    #+#              #
#    Updated: 2025/01/29 13:58:35 by bproton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Violence
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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