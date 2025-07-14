/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:14:46 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/16 12:47:01 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memo;

	if (nmemb == 18446744073709551615UL || size == 18446744073709551615UL)
		return (0);
	memo = (void *)malloc(nmemb * size);
	if (!memo)
		return (NULL);
	ft_bzero(memo, (nmemb * size));
	return (memo);
}

/*void	ft_bzero(void *s, size_t n)
void * meaning that isn't associated with any data types.
It points to some data location in the storage. This
means it points to the adress of variables.
allocates memory and sets its bytes in fuction of the space
needed.The allocated memory is filled with bytes of value
zero. size_t is an unsigned integer
usefull because can be used to allocate memory of any data type
*/
/*#include <stdio.h>
int main(void)
{
	int *arr;
	size_t i, num_elements = 5;

	// Teste 1: Alocação de memória para 5 inteiros
	arr = (int *)ft_calloc(num_elements, sizeof(int));

	if (!arr)
	{
		printf("Erro: Falha na alocação de memória.\n");
		return (1);
	}

	// Imprime os valores do array (todos devem ser 0)
	printf("Valores do array após ft_calloc:\n");
	for (i = 0; i < num_elements; i++)
		printf("%d ", arr[i]); // Deve imprimir: 0 0 0 0 0

	printf("\n");

	// Teste 2: Alterando valores e verificando se a memória foi corretamente alocada
	arr[0] = 42;
	arr[1] = 100;
	arr[2] = -5;

	printf("Valores do array após modificações:\n");
	for (i = 0; i < num_elements; i++)
		printf("%d ", arr[i]); // Deve imprimir: 42 100 -5 0 0

	printf("\n");

	// Liberando a memória alocada
	free(arr);
	return (0);
}*/
