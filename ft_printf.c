/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:30:51 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:15:07 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(const char *format, va_list args, int i, int j)
{
	if (format[j] == 'c')
		i = ft_putchar(va_arg(args, int), i);
	if (format[j] == 's')
		i = ft_found_s(va_arg(args, char *), i);
	if (format[j] == 'p')
		i = ft_found_p(va_arg(args, void *), i);
	if (format[j] == 'd' || format[j] == 'i')
		i = ft_found_d(va_arg(args, int), i);
	if (format[j] == 'u')
		i = ft_found_u(va_arg(args, unsigned int), i);
	if (format[j] == 'x')
		i = ft_found_x(va_arg(args, size_t), i);
	if (format[j] == 'X')
		i = ft_found_upperx(va_arg(args, size_t), i);
	if (format[j] == '%')
	{
		i = ft_putchar('%', i);
		return (1);
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
			i = ft_conversion(format, args, i, ++j);
		else
		{
			i++;
			write(1, &format[j], 1);
		}
		j++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	int	i;
	void *p = &i;
	
	i = 5;
	ft_printf("me ----> s: %s, p: %p\n", "", p);
	printf("real --> s: %s, p: %p\n", "", p);
	ft_printf("me ----> d: %d, x: %x, c: %c, X: %X\n", 0, 0, 't', 0);
	printf("real --> d: %d, x: %x, c: %c, X: %X\n", 0, 0, 't', 0);
	ft_printf("me ----> i: %i, u: %u, percent: %%\n", 0, 0);
	printf("real --> i: %i, u: %u, percent: %%\n", 0, 0);
	return (0);
}
