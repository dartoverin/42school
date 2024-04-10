/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:08:53 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:03:07 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(void)
{
	char	c;

	c = 'm';
	if (ft_isprint(c)) {
		printf("%c is a digit.\n", c);
	} else {
		printf("%c is not a digit.\n", c);
	}
	return (0);
}
*/
