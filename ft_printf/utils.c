/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:36:17 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/25 12:36:18 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Conta o número de dígitos (para itoa e utoa)
static int	ft_intlen(long n)
{
	int	len = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb = n;
	int		len = ft_intlen(nb);
	char	*str;

	if (nb < 0)
		len++; // espaço para o '-'
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (--len >= 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	int		len = 1;
	unsigned int tmp = n;

	while (tmp >= 10)
	{
		tmp /= 10;
		len++;
	}
	char *str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
