# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 15:50:11 by fflores           #+#    #+#              #
#    Updated: 2021/03/05 15:50:13 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re
COMPILER = clang++
FLAGS = -Wall -Werror -Wextra
SRCS = phonebook.cpp
HEADER = phonebook.hpp
NAME = phonebook
OBJS = ${SRCS:.c=.o}

all: $(NAME)

NAME: $(SRC)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm $(NAME)

re: all
