/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:30:51 by amasiuk           #+#    #+#             */
/*   Updated: 2024/04/04 18:43:09 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_conversion(unsigned long ptr)
{
	if (ptr)
	{
		ft_putstr("0x");
		return (2 + ft_puthex(ptr, "0123456789abcdef"));
	}
	else
	{
		ft_putstr("(nil)");
		return (5);
	}
}

int	ft_conversion(const char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		i += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		i += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		i += ft_putchar('%');
	else if (format == 'p')
		i += ft_p_conversion(va_arg(args, unsigned long));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_conversion(format[i + 1], args);
			i++;
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	int	j;
	
	j = 0;
	j = ft_printf("a%s\0a", "\0hello \0 There");
	printf("\n%d\n", j);
	
	j = 0;
	j = printf("a%s\0a", "\0hello \0 There");
	printf("\n%d", j);
}*/
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	char	*str;
	int		*p;

	str = NULL;
	i = 5;
	p = &i;
	ft_printf("%d\n", ft_printf("meow\n%d %s %i %u %p %x %X %% %s\n",
		42, "hello", -42, 42425426, p, 908, 908, str));
	printf("%d\n", printf("meow\n%d %s %i %u %p %x %X %% %s\n", 42, "hello",
			-42, 42425426, p, 908, 908, str));
}
*/
