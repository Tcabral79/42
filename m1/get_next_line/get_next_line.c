/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:10:03 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/22 14:57:28 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	bytes = 1;
	while (!ft_strlenchr(line, NULL))
	{
		if (!buffer[0])
			bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(line), NULL);
		if (bytes == 0)
			return (line);
		line = ft_strjoin(line, buffer);
		ft_buffer_clean(buffer);
	}
	return (line);
}

// int main(void)
// {
// int fd = open("empty.txt", O_RDONLY);
// char *linha;

// linha = get_next_line(fd);
// printf("%s", linha);
// free(linha);
// close(fd);
// return (0);
// }