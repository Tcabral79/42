#include "libft.h"
#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i-- > 0)// é igual a i > 0 e depois decrementa 
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
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
memmove copies n character from src to dest, but for overlapping memory
blocks, memmove is a safer approach than memcpy

the code below is used to test the function*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[22];
	char str2[15];
	strcpy(str1, "daje Roma daje0123456");
	puts(str1);
	ft_memmove(str2, str1, 15);
	str2[15] = '\0';
	puts(str2);
	return (0);
}*/

/*ou seja se o destino for maior que a fonte (ou seja, há espaço mais que suficiente para armazenar a fonte)
vai começar a mover("copiar") a partir do final da fonte.
Se a fonte for maior que o destino ele vai mover desde o inicio da fonte até ao final do espaço do destino*/