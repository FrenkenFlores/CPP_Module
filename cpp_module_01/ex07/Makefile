# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 20:46:56 by fflores           #+#    #+#              #
#    Updated: 2021/03/23 20:46:57 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean re

COMPILER = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = replace
SRCS = replace.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm $(NAME)
	rm *.replace

re: clean all