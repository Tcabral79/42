/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:14:28 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/01 13:35:17 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	l;
	size_t	len;

	l = n;
	len = ft_size(l) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (l < 0)
	{
		l *= -1;
		str[0] = '-';
	}
	str[--len] = '\0';
	if (l == 0)
		str[0] = '0';
	while (l)
	{
		str[--len] = (l % 10) + '0';
		l /= 10;
	}
	return (str);
}

/*int	main(void)
{
	int	n = -123545;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/