# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 12:48:57 by amasiuk           #+#    #+#              #
#    Updated: 2024/03/28 16:38:58 by amasiuk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
AR = ar -rc
RM = rm -f
HEADER = ft_printf.h 
SRC =  ft_printf.c \
    ft_c.c \
	ft_d.c \
	ft_p.c \
	ft_s.c \
	ft_u.c \
	ft_upperx.c \
	ft_x.c \
	
all:	$(NAME)

all: $(NAME)

$(NAME):$(OBJ)
	@$(AR) $@ $^

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< 

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
