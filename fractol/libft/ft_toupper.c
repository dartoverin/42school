/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:52:45 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:57 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
int	main(void)
{
	int	c;
	int	result;

	c = 'm';
	result = ft_toupper(c);
	printf("Original: %c, Uppercase: %c\n", (char)c, (char)result);
	return (0);
}
*/
