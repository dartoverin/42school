/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:46:30 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:17 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, len + 1);
	ft_strlcat(result, s2, len + 1);
	return (result);
}

/*
int	main(void)
{
	char	s1[10] = "String 1.";
	char	s2[10] = "String 2.";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("The result is %s\n", result);
	printf("s1 doesn't change: %s\n", s1);
	printf("s2 doesn't change: %s\n", s2);
	return (0);
}
*/
