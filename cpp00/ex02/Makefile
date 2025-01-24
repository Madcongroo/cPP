# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 14:41:45 by proton            #+#    #+#              #
#    Updated: 2025/01/23 14:44:52 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	Account.cpp tests.cpp
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