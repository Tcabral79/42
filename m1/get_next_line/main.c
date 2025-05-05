/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:13:03 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/05 12:15:18 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
int fd = open("test.txt", O_RDONLY);
char *linha;

while((linha = get_next_line(fd)) != NULL)
{
	printf("%s", linha);
	free(linha);
}
close(fd);
return (0);
}