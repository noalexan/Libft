# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noahalexandre <noahalexandrestudent.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/06/17 10:15:36 by noahalexand      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Werror -Wextra -Wall

NAME := libft.a

SRC := ft_atoi.c ft_itoa.c ft_bzero.c ft_split.c \
			ft_memchr.c ft_memcpy.c ft_memset.c ft_strdup.c ft_strlen.c \
			ft_strchr.c ft_substr.c ft_strcmp.c ft_calloc.c ft_memcmp.c \
			ft_strlcat.c ft_foreach.c ft_isalpha.c ft_isdigit.c ft_toupper.c \
			ft_strnstr.c ft_isalnum.c ft_isascii.c ft_memmove.c ft_isprint.c \
			ft_strjoin.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
			ft_strtrim.c ft_strmapi.c ft_lstlast.c ft_striteri.c ft_putstr_fd.c \
			ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_lstadd_back.c \
			ft_lst_before_last.c

OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $@ $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.PRECIOUS: $(SRC)
