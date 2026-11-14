NAME = FlagTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)
CPP = c++
CPPFLAGS =  -std=c++98 -Wextra -Wall -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
