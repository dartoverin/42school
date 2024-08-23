/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rng.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:16:27 by amasiuk           #+#    #+#             */
/*   Updated: 2024/08/21 18:16:10 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rng(void)
{
	int	fd;
	int	rng;

	fd = open("/dev/random", O_RDONLY);
	if (fd == -1)
		return (-1);
	if (read(fd, &rng, 4) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	if (rng < 0)
		rng *= -1;
	return (rng);
}
