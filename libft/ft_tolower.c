/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:00:24 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:53 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}

/*
int	main(void)
{
	int	c;
	int	result;

	c = 'A';
	result = ft_tolower(c);
	printf("Original: %c, Lowercase: %c\n", (char)c, (char)result);
	return (0);
}
*/
