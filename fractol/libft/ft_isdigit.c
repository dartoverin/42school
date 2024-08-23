/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:36:30 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:03:02 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int	main(void)
{
	char	c;

	c = '9';
	if (ft_isdigit(c)) {
		printf("%c is a digit.\n", c);
	} else {
		printf("%c is not a digit.\n", c);
	}
	return (0);
}
*/