# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 13:07:20 by jaferna2          #+#    #+#              #
#    Updated: 2024/09/20 16:01:38 by jaferna2         ###   ########.fr        #
#                                                            

# Variables
NAME = Libft

HEADER = include

CC = cc

CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

SRC = main.c \
      ft_isalpha.c \
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
	ft_split.c
    
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling $(NAME) and creating object files..."
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "Removing object files..."
	rm -f $(OBJS)

fclean: clean
	@echo "Removing $(NAME)..."
	rm -f $(NAME)

re: fclean all

test: all
	@echo "Running $(NAME)..."
	@./$(NAME)
	rm -f $(NAME)

