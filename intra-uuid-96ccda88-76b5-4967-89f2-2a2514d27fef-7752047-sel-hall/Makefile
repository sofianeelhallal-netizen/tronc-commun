#include "libft.h"

NAME = libft.a
GCC = CC
FLAGS = -Wall -Wextra -Werror
SRCS = ft_*.c libft.h
OBJS = $(SRCS:.c=.o)

all = $NAME

$(NAME): $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c calc.h
    $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re