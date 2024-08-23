/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:16:36 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:50 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	if (!s)
		return (0);
	if ((size_t)ft_strlen(s) <= start)
	{
		res = ft_strdup("");
		return (res);
	}
	s_len = ft_strlen(s + start);
	if (s_len > len)
		s_len = len;
	res = (char *)malloc(s_len + 1);
	if (!res)
		return (0);
	ft_strlcpy(res, s + start, s_len + 1);
	return (res);
}

/*
int	main(void)
{
	const char		*originalString = "Hello, World!";
	unsigned int	startIndex;
	size_t			subStringLength;
	char			*substring;

	startIndex = 2;
	subStringLength = 17;
	substring = ft_substr(originalString, startIndex, subStringLength);
	if (substring != NULL)
	{
		printf("Original String: %s\n", originalString);
		printf("Substring: %s\n", substring);
		free(substring);
	}
	return (0);
}
*/
