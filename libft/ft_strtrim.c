/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:31:56 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 12:05:47 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (s1 == NULL || set == NULL)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return ((char *)ft_calloc(sizeof(char), 1));
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}
