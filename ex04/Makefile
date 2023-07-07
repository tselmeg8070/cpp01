NAME = sed
CC = g++
FLAGS = -Wall -Wextra -Werror
VFLAGS = -std=c++98
FILES = main

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(VFLAGS) -o $(NAME) $^

.cpp.o: $(SRCS)
	$(CC) $(FLAGS) $(VFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
