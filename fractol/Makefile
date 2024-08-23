# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 17:16:27 by amasiuk           #+#    #+#              #
#    Updated: 2024/08/21 18:18:22 by amasiuk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = -Lminilibx-linux -lmlx -lXext -lX11 -Iminilibx-linux
RM = rm -f
CFILES = main.c utils.c events.c render_sets.c zoom.c fractols.c fern.c
MINILIBX = minilibx-linux/libmlx_Linux.a
MINILIBX_REP = minilibx-linux
LIBFT = libft/libft.a

all: ${NAME}

${NAME}: ${CFILES} ${MINILIBX} ${LIBFT}
	@${CC} $^ ${LIB} ${CFLAGS} -o $@

${MINILIBX}: ${MINILIBX_REP}
	@rm -rf minilibx-linux/.git
	@make -C $^

${MINILIBX_REP}:
	@git clone https://github.com/42Paris/minilibx-linux.git

${LIBFT}: libft
	@make -C libft

bonus: ${NAME}

clean:
	@make clean -C libft

fclean:
	@make fclean -C libft
	@${RM} ${NAME}

re: fclean all
