/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:48:40 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:35 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (!str1[i] && !str2[i])
			return (0);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[18] = "1234567890";
	char	str2[18] = "1234967890";

	if (ft_strncmp(str1, str2, 10)==0)
		puts("Strings are the same");
	else
		puts("Strings are different");
	return (0);
}
*/