/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:54:03 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:04:38 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "Hello World!";
	char	dest[3];

	ft_memmove(dest, str, 4);
	ft_putstr_fd(dest, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
