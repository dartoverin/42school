/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:34:16 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:03 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
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
	ch = 'o';
	ptr = strchr(str, ch);
	if (ptr)
	{
		printf("Find symbol here %I64lu \n", ptr - str);
	}
	else
		printf("Not found \n");
}
*/
