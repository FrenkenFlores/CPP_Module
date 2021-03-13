# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 15:50:11 by fflores           #+#    #+#              #
#    Updated: 2021/03/13 15:35:44 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re
COMPILER = clang++
FLAGS = -Wall -Werror -Wextra
SRCS = Contact.cpp phonebook.cpp
HEADER = Contact.hpp
NAME = phonebook

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm $(NAME)

re: clean all
