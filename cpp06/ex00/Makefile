# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 17:40:58 by proton            #+#    #+#              #
#    Updated: 2026/02/17 09:17:00 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.POSIX:
.SUFFIXES:

NAME		=	convert
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
INCDIR		=	include/
SRCDIR		=	src/
SRC			=	$(SRCDIR)ScalarConverter.cpp $(SRCDIR)main.cpp $(SRCDIR)ParseScalar.cpp
INCL		=	$(INCDIR)ScalarConverter.hpp $(INCDIR)ParseScalar.hpp

OBJS		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: all re