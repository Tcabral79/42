/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:14:46 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/18 13:18:58 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memo;

	if (!nmemb || !size)
		return (malloc(0));
	if ((size != 0 && nmemb != 0) && nmemb > ~(size_t)0 / size)
		return (NULL);
	memo = malloc(nmemb * size);
	if (!memo)
		return (NULL);
	ft_bzero(memo, nmemb * size);
	return (memo);
}

/*int	main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int		*array;
	size_t	i;

	array = (int *)ft_calloc(count, size);
	if (!array)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (i < count)
	{
		printf("array[%zu] = %d\n", i, array[i]);
		i++;
	}
	free(array);
	return (0);
}*/