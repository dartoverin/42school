/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:54:43 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:15:15 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_u(unsigned int u, int i)
{
	int	count;

	count = 0;
	if (u == 0)
	{
		ft_putchar('0', i);
		return (i + 1);
	}
	else if (u > UINT_MAX)
	{
		ft_found_s("(maxuint)", i);
		return (i + 9);
	}
	else
	{
		if (u >= 10)
			count = ft_found_u(u / 10, i);
		ft_putchar(u % 10 + '0', i);
		return (i + count + 1);
	}
}
