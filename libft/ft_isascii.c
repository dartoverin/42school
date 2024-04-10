/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:58:19 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:02:59 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	char	c;

	c = ' ';
	if (ft_isascii(c)) {
		printf("%c is a digit.\n", c);
	} else {
		printf("%c is not a digit.\n", c);
	}
	return (0);
}
*/