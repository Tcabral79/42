/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:45 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/30 13:59:16 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}*/

int	ft_puthex(unsigned int num, const char format)
{
	char	*hex;
	int		count;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		count = count + ft_puthex(num / 16, format);
	count = count + ft_print_char(hex[num % 16]);
	return (count);
}

int	ft_print_hex(unsigned int num, const char format)
{
	return (ft_puthex(num, format));
}

int	main (void)
{
	unsigned int	c = 2555;
	
	ft_print_hex (c, 'X');
	return (0);
}
