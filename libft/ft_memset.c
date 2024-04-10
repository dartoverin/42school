/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:30 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:04:42 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*var;
	unsigned char	byte;
	size_t			i;

	i = 0;
	byte = (unsigned char)c;
	var = (unsigned char *)b;
	while (i < len)
	{
		var[i] = byte;
		i++;
	}
	return (b);
}

/*
int	main(void)
{
	char	buffer[20];

	ft_memset(buffer, '_', 5);
	write(1, buffer, 5);
	return (0);
}
*/
