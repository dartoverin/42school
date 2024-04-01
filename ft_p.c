/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:03:27 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/28 17:15:03 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_p(void *p, int i)
{
	unsigned long	pointer;

	pointer = (unsigned long)p;
	if (!pointer)
	{
		i = ft_found_s("(nil)", i);
		return (i + 5);
	}
	else
	{
		i = ft_putchar('0', i);
		i = ft_putchar('x', i);
		i = ft_found_x(pointer, i);
	}
	return (i);
}
