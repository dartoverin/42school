# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 12:48:57 by amasiuk           #+#    #+#              #
#    Updated: 2024/04/04 17:47:31 by amasiuk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
LIBC = ar rc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c \
	 ft_putstr.c \
	 ft_putnbr.c \
	 ft_puthex.c \
	 ft_printf.c \
	 ft_putunsigned.c \
	 
OBGS = $(SRCS:.c=.o)

all:${NAME}

${NAME}:${OBGS}
	${LIBC} ${NAME} ${OBGS}
clean:
	rm -f ${OBGS}
fclean:clean
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re
