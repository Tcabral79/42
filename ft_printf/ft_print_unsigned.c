/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:52:03 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/01 13:54:11 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_print_unsigned(n / 10);
	count = count + ft_print_char((n % 10) + '0');
	return (count);
}

/*int	main (void)
{
	unsigned int	n = 1234567890;
	ft_print_unsigned(n);
	return (0);
}*/