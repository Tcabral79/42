/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:55 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/25 12:35:56 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	len = 1;

	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_utoa(unsigned int n)
{
	int		len = ft_numlen(n);
	char	*str = malloc(len + 1);

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

int	ft_print_unsigned(unsigned int n)
{
	char	*str = ft_utoa(n);
	int		len = 0;

	if (!str)
		return (0);
	len = ft_print_str(str); // já imprimimos com ft_print_str
	free(str);
	return (len);
}
