# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 01:21:00 by proton            #+#    #+#              #
#    Updated: 2026/02/17 09:27:06 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.POSIX:
.SUFFIXES:

NAME		=	base
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCDIR		=	src/
INCLDIR		=	include/
SRC			=	$(SRCDIR)Base.cpp $(SRCDIR)main.cpp
INCLUDES	=	$(INCLDIR)Base.hpp $(INCLDIR)A.hpp $(INCLDIR)B.hpp $(INCLDIR)C.hpp

OBJS		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: all

.PHONY: all re
