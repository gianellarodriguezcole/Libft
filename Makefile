# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:01:48 by giarodri          #+#    #+#              #
#    Updated: 2023/09/26 14:46:39 by giarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rc

SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
            ft_strlen.c

SRC = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(AR) $(ARFLAGS) $@ $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(SRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

