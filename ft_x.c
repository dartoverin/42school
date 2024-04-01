/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:03:06 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:15:24 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_x(unsigned long x, int i)
{
	unsigned long	u;

	u = x;
	if (u == 0)
		i = ft_putchar('0', i);
	else if (u >= 16)
	{
		i = ft_found_x(u / 16, i);
		i = ft_found_x(u % 16, i);
	}
	else
	{
		if (u <= 9)
			i = ft_putchar(u + '0', i);
		else
			i = ft_putchar(u + 'a' - 10, i);
	}
	return (i);
}
