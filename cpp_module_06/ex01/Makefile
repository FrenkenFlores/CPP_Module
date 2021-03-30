# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 12:04:35 by fflores           #+#    #+#              #
#    Updated: 2021/03/25 17:23:52 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re

NAME = serialize
SRCS = utils.cpp main.cpp
HEADER = header.hpp
FLAGS = -Wall -Werror -Wextra -std=c++98
COMPILER = clang++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm $(NAME)

re: clean all