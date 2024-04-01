/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:39:16 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 16:50:33 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c, int i);
int	ft_found_d(int d, int i);
int	ft_found_p(void *p, int i);
int	ft_found_s(char *s, int i);
int	ft_found_u(unsigned int u, int i);
int	ft_found_upperx(size_t x, int i);
int	ft_found_x(size_t x, int i);

#endif
