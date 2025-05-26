/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:59:56 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/22 14:34:00 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			bytes;

	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	bytes = 1;
	while (!ft_strlenchr(line, NULL))
	{
		if (!buffer[fd][0])
			bytes = read(fd, buffer[fd], BUFFER_SIZE);
		if (bytes < 0)
			return (free(line), NULL);
		if (bytes == 0)
			return (line);
		line = ft_strjoin(line, buffer[fd]);
		ft_buffer_clean(buffer[fd]);
	}
	return (line);
}

// int main(int argc, char **argv)
// {
// 	int fd;
// 	char *line;
// 	int i;

// 	if (argc < 2)
// 	{
// 		printf("Uso: %s <arquivo>\n", argv[0]);
// 		return (1);
// 	}
// 	i = 1;
// 	while (argv[i])
// 	{
// 	fd = open(argv[i], O_RDONLY);
// 	if (fd < 0)
// 	{
// 		printf("Erro ao abrir arquivo\n");
// 		return (1);
// 	}
// 	printf ("//////////%s//////////\n", argv[i]);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	i++;
// 	}
// 	return (0);
// }
