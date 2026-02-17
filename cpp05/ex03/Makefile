# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: proton <proton@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 14:44:13 by proton            #+#    #+#              #
#    Updated: 2026/02/17 09:17:00 by proton           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.POSIX:
.SUFFIXES:

NAME		=	Bureaucrat
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
INCDIR		=	include/
SRCDIR		=	src/
SRC			=	$(SRCDIR)main.cpp $(SRCDIR)Bureaucrat.cpp $(SRCDIR)AForm.cpp $(SRCDIR)PresidentialPardonForm.cpp \
				$(SRCDIR)RobotomyRequestForm.cpp $(SRCDIR)ShrubberyCreationForm.cpp $(SRCDIR)Intern.cpp
INCL		=	$(INCDIR)AForm.hpp $(INCDIR)Bureaucrat.hpp $(INCDIR)Intern.hpp $(INCDIR)ShrubberyCreationForm.hpp \
				$(INCDIR)PresidentialPardonForm.hpp $(INCDIR)RobotomyRequestForm.hpp

OBJS		=	$(SRC:.cpp=.o)

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