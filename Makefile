# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:58:31 by giarodri          #+#    #+#              #
#    Updated: 2023/10/03 13:22:47 by giarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

LIBC =	ft_atoi.c	 \
		ft_bzero.c   \
		ft_calloc.c  \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_memchr.c  \
		ft_memcmp.c  \
		ft_memcpy.c  \
		ft_memmove.c \
		ft_memset.c  \
		ft_strchr.c  \
		ft_strdup.c  \
		ft_strlen.c  \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcat.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_strlcpy.c

ADDITIONAL = ft_substr.c 		\
			 ft_strjoin.c 		\
			 ft_strmapi.c 		\
             ft_striteri.c 		\
			 ft_putchar_fd.c 	\
			 ft_strtrim.c       \
			 ft_putstr_fd.c 	\
			 ft_putendl_fd.c	\
			 ft_putnbr_fd.c 	\
			 ft_itoa.c			\
			 ft_split.c

SRCS = ${LIBC} ${ADDITIONAL}

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

%.o:%.c Makefile libft.h
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean;
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
