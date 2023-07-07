NAME = Moar
CC = g++
FLAGS = -Wall -Wextra -Werror
VFLAGS = -std=c++98
FILES = Weapon \
		HumanA \
		HumanB \
		main
INCLS = HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(VFLAGS) -o $(NAME) $^

.cpp.o: $(SRCS) $(INCLS)
	$(CC) $(FLAGS) $(VFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
