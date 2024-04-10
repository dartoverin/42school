/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:47:15 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:43 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}

/*
int	main(const char *s, int c)
{
	char	*str;
	char	ch;
	char	*ptr;

	str = "Meooooow";
	ch = 'M';
	ptr = ft_strrchr(str, ch);
	if (ptr)
	{
		printf("Find symbol here %I64lu \n", ptr - str + 1);
	}
	else
		printf("Not found \n");
}
*/