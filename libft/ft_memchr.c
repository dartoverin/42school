/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:57:20 by dartoverin        #+#    #+#             */
/*   Updated: 2024/03/18 12:04:26 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	byte;

	src = (unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == byte)
			return (&src[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*pch;
	char	str[] = "Example string";

	pch = (char *)ft_memchr(str, 'p', ft_strlen(str));
	if (pch != NULL)
		printf("'p' found at position %ld.\n", pch - str + 1);
	else
		printf("'p' not found.\n");
	return (0);
}
*/
