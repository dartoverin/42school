/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:03:53 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:14:59 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_d(int d, int i)
{
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = i + 11;
	}
	else if (d < 0)
	{
		i = ft_putchar('-', i);
		i = ft_found_d(-d, i);
	}
	else if (d >= 0 && d < 10)
		i = ft_putchar(d + '0', i);
	else
	{
		i = ft_found_d(d / 10, i);
		i = ft_putchar(d % 10 + '0', i);
	}
	return (i);
}
