/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:02:30 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:15:18 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_upperx(size_t x, int i)
{
	unsigned int	u;

	u = (unsigned int)x;
	if (u == 0)
		i = ft_putchar('0', i);
	else if (u >= 16)
	{
		i = ft_found_upperx(u / 16, i);
		i = ft_found_upperx(u % 16, i);
	}
	else
	{
		if (u <= 9)
			i = ft_putchar(u + '0', i);
		else
			i = ft_putchar(u + 'A' - 10, i);
	}
	return (i);
}
