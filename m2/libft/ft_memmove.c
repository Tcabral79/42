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

//#include "libft.h"
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
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
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

/*#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s)
    {
        for (size_t i = 0; i < n; i++)
            d[i] = s[i];
    }
    else
    {
        for (size_t i = n; i > 0; i--)
            d[i - 1] = s[i - 1];
    }

    return dest;
}*/
/*#include <stdio.h>
int main(void)
{
    char str1[50] = "Exemplo de memmove com sobreposição!";
    char str2[50] = "Exemplo de memmove com sobreposição!";

    printf("Antes do ft_memmove: %s\n", str1);
    ft_memmove(str1 + 10, str1, 20);
    printf("Depois do ft_memmove: %s\n", str1);

    printf("\nAntes do memmove original: %s\n", str2);
    ft_memmove(str2 + 10, str2, 20);
    printf("Depois do memmove original: %s\n", str2);

    return 0;
}*/


