NAME = libft.a

CC = cc

CFILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
    ft_calloc.c \
    ft_bzero.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_CFILES = ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c	\
	ft_lstlast_bonus.c	\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c	\
	ft_lstiter_bonus.c	\
	ft_lstmap_bonus.c

HEADER_DIR = ./includes

OBJS = $(CFILES:.c=.o)
BONUS_OBJ = $(BONUS_CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I $(HEADER_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJ)
	rm -f ./test_program
	rm -f ./test_bonus_program
	rm -f .b

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) main.o
	$(CC) $(CFLAGS) -o test_program main.o $(NAME)
	@./test_program
	rm -f ./test_program

bonus: .b

.b: $(OBJS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)
	touch .b

bonus_test: bonus main_bonus.o
	$(CC) $(CFLAGS) -o test_bonus_program main_bonus.o $(NAME)
	@./test_bonus_program
	rm -f test_bonus_program

.PHONY: all clean fclean re test bonus bonus_test

