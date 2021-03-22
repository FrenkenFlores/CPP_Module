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