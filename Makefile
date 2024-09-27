NAME = libft
COMP_NAME = libft

# Compiler to use 
CC = cc

# Source files for the main library (excluding main.c)
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

# Bonus source files
BONUS_CFILES = ft_lstnew.c	\
	ft_lstadd_front.c	\
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstadd_back.c	\
	ft_lstdelone.c	\
	ft_lstclear.c	

HEADER_DIR = ./includes

# Object files
OBJS = $(CFILES:.c=.o)
BONUS_OBJ = $(BONUS_CFILES:.c=.o)

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I $(HEADER_DIR)

# Default rule
all: $(NAME)

# Main library compilation
$(NAME): $(OBJS)
	@echo "Compiling $(NAME) and creating object files..."
	ar rcs $(NAME).a $(OBJS)

# Cleaning object files
clean:
	@echo "Removing object files..."
	rm -f $(OBJS) $(BONUS_OBJ)

# Full clean: removing object files and the library
fclean: clean
	@echo "Removing $(NAME).a..."
	rm -f $(NAME).a

# Rebuild everything
re: fclean all

# Rule to test the main program
test: $(NAME) main.o
	@echo "Creating test executable..."
	$(CC) $(CFLAGS) -o test_program main.o $(NAME).a
	@echo "Running test executable..."
	@./test_program
	rm -f test_program

# Bonus rule to include bonus files in libft.a
bonus: $(OBJS) $(BONUS_OBJ)
	@echo "Compiling bonus object files and adding to $(NAME).a..."
	ar rcs $(NAME).a $(OBJS) $(BONUS_OBJ)

# Rule to test the bonus program
bonus_test: bonus main_bonus.o
	@echo "Creating bonus test executable..."
	$(CC) $(CFLAGS) -o test_bonus_program main_bonus.o $(NAME).a
	@echo "Running bonus test executable..."
	@./test_bonus_program
	rm -f test_bonus_program

# Avoid make treating clean, fclean, etc., as files
.PHONY: all clean fclean re test bonus bonus_test
