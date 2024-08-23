/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:06:54 by amasiuk           #+#    #+#             */
/*   Updated: 2024/03/18 11:48:18 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char	buffer[10] = "Hello";

	printf("До bzero: %s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("После bzero: %s\n", buffer);
	return (0);
}
*/
