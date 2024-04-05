/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:39:16 by amasiuk           #+#    #+#             */
/*   Updated: 2024/04/04 17:53:35 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putunsigned(unsigned int nb);
int	ft_puthex(unsigned long nb, char *base);
int	ft_putchar(char c);
int	ft_putnbr(int c);
int	ft_putstr(char *str);
int	ft_printf(const char *format, ...);

#endif
