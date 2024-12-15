NAME=libft

CFLAGS=-Wall -Wextra -Werror

OBJ=\
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_strlen.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_strlcpy.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strncmp.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_strlcat.o \
	ft_strnstr.o \
	ft_atoi.o \
	ft_calloc.o

BONUS_OBJ=\
	ft_lstnew.o \
	ft_lstadd_front.o \
	ft_lstsize.o \
	ft_lstlast.o \
	ft_lstadd_back.o \
	ft_lstdelone.o \
	ft_lstclear.o \
	ft_lstiter.o \
	ft_lstmap.o

.PHONY: all
all: $(NAME).a $(NAME).so

.PHONY: bonus
bonus: $(NAME)_bonus.a $(NAME)_bonus.so

.PHONY: shared
shared: $(NAME).so

.PHONY: static
static: $(NAME).a

$(NAME).a: $(OBJ)
	$(AR) rcs $@ $(OBJ)

$(NAME)_bonus.a: $(OBJ) $(BONUS_OBJ)
	$(AR) rcs $@ $(OBJ) $(BONUS_OBJ)

$(NAME).so: $(OBJ)
	$(CC) $(LDFLAGS) -shared -o $@ $(OBJ) $(LDLIBS)

$(NAME)_bonus.so: $(OBJ) $(BONUS_OBJ)
	$(CC) $(LDFLAGS) -shared -o $@ $(OBJ) $(BONUS_OBJ) $(LDLIBS)

.PHONY: clean
clean:
	@$(RM) -v $(OBJ) $(BONUS_OBJ)

.PHONY: fclean
fclean: clean
	@$(RM) -v $(NAME).a $(NAME)_bonus.a $(NAME).so $(NAME)_bonus.so

.PHONY: re
re: fclean all
