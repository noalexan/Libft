# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/03/25 12:12:07 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Werror -Wextra -Wall

NAME	= libft.a

SRCS	=	ft_atoi.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcmp.c  \
			ft_memmove.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_strtrim.c \
			ft_split.c \

OBJS	= $(SRCS:.c=.o)

RM		= rm -rf
AR		= ar rc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re