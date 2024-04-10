/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:45:52 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:02:40 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97
			&& c <= 122));
}

/*
int	main(void)
{
	char	c;

	c = '`';
	if (ft_isalnum(c)) {
		printf("%c is a digit.\n", c);
	} else {
		printf("%c is not a digit.\n", c);
	}
	return (0);
}
*/