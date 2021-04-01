# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 12:04:35 by fflores           #+#    #+#              #
#    Updated: 2021/03/31 16:16:10 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re

NAME = iter
SRCS = main.cpp
HEADER = iter.hpp
FLAGS = -Wall -Werror -Wextra -std=c++98
COMPILER = clang++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm $(NAME)

re: clean all