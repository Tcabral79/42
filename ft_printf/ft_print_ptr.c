/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:51 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/01 13:59:35 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count = count + ft_put_hex(n / 16);
	count = count + ft_print_char(hex[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count = count + ft_print_str("0x");
	count = count + ft_put_hex((unsigned long long)ptr);
	return (count);
}

/*int	main (void)
{
	void *s = "benfica";
	ft_print_ptr(s);
	return (0);
}*/