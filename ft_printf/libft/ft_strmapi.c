/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:13:25 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/15 13:44:51 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	ft_hashtag(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ('#');
	else
		return (c);
}

/*int	main(void)
{
	char	*original = "42Lisboa";
	char	*result = ft_strmapi(original, ft_hashtag);

	printf("Original: %s\n", original);
	printf("Mapped  : %s\n", result);
	free(result);
	return (0);
}*/