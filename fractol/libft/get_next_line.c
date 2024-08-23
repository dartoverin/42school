/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasiuk <amasiuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:35:01 by amasiuk           #+#    #+#             */
/*   Updated: 2024/05/06 13:49:01 by amasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_and_return(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*backup = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = read_and_return(fd, buf, backup);
	free(buf);
	if (!line)
		return (NULL);
	backup = extract(line);
	return (line);
}


#include "stdio.h"
#include "fcntl.h"
	
int	main(void)
{
	char	*line;
	int		fd;

	fd = open("ft_printf.c", O_RDONLY);
	if (fd == -1)
	{
		printf("%s\n", "error");
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (EXIT_SUCCESS);
}
/*
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		lines_to_read;

	if (argc != 3)
	{
		printf("Usage: ./program file_name lines_to_read\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Failed to open file");
		return (1);
	}
	lines_to_read = atoi(argv[2]);
	while (lines_to_read > 0 && (line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
		lines_to_read--;
	}
	if (line == NULL)
	{
		if (line == NULL)
			printf("End of file reached or an error occurred\n");
		free(line);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}
*/
/*
#include "fcntl.h"
#include "stdio.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("%s\n", "error");
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (EXIT_SUCCESS);
}
*/
/*
#include "fcntl.h"
#include "stdio.h"

int	main(void)
{
	int			i;
	char		*str;
	int			fd;
	const char	*filename = "test.txt";

	i = 15;
	fd = open(filename, O_RDONLY);
	printf("File descriptor = %d\n", fd);
	while (i > 0)
	{
		str = get_next_line(fd);
		printf("->%s<-", str);
		free(str);
		i--;
	}
	close(fd);
	return (0);
}
*/
