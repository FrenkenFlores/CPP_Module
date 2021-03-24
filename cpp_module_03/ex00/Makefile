# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 12:04:35 by fflores           #+#    #+#              #
#    Updated: 2021/03/24 12:08:30 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re test1 test2 test3 test4

NAME = FragTrap
SRCS = FragTrap.cpp main.cpp
HEADER = FragTrap.hpp
FLAGS = -Wall -Werror -Wextra -std=c++98
COMPILER = clang++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

test1:
	@$(COMPILER) $(FLAGS) $(SRCS) -D NUM=1 -o test1
	@./test1
	@rm test1

test2:
	@$(COMPILER) $(FLAGS) $(SRCS) -D NUM=2 -o test2
	@./test2
	@rm test2

test3:
	@$(COMPILER) $(FLAGS) $(SRCS) -D NUM=3 -o test3
	@./test3
	@rm test3

clean:
	@rm $(NAME)

re: clean all