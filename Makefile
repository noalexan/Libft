CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar r $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean $(NAME)

.PHONY: all $(NAME) clean fclean re
