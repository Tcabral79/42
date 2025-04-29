/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:14:14 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/16 13:00:07 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
void print_result(const char *label, const 
char *ft_result, const char *sys_result)
{
	printf("%s\n", label);
	printf("ft_memmove:  %s\n", ft_result);
	printf("memmove:     %s\n", sys_result);
	if (strcmp(ft_result, sys_result) == 0)
		printf("✅ Resultado: OK\n\n");
	else
		printf("❌ Resultado: FAIL\n\n");
}

int main(void)
{
	char	ft_buf1[100], sys_buf1[100];
	char	ft_buf2[100], sys_buf2[100];
	char	ft_buf3[100], sys_buf3[100];

	strcpy(ft_buf1, "ABCDEFG");
	strcpy(sys_buf1, "ABCDEFG");
	ft_memmove(ft_buf1 + 2, ft_buf1, 5);     // copia "ABCDE" -> posição 2
	memmove(sys_buf1 + 2, sys_buf1, 5);
	print_result("Teste 1: Sem sobreposição", ft_buf1, sys_buf1);
	strcpy(ft_buf2, "123456789");
	strcpy(sys_buf2, "123456789");
	ft_memmove(ft_buf2 + 2, ft_buf2, 5);     // move "12345" -> posição 2
	memmove(sys_buf2 + 2, sys_buf2, 5);
	print_result("Teste 2: Sobreposição (src < dst)", ft_buf2, sys_buf2);
	strcpy(ft_buf3, "abcdefghi");
	strcpy(sys_buf3, "abcdefghi");
	ft_memmove(ft_buf3, ft_buf3 + 2, 5);
	memmove(sys_buf3, sys_buf3 + 2, 5);
	print_result("Teste 3: Sobreposição (dst < src)", ft_buf3, sys_buf3);

	return 0;
}*/