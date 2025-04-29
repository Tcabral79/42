/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:58 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/25 12:35:59 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i = 0;
	int		printed = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed = printed + ft_check_format(format[i + 1], args);
			i++;
		}
		else
			printed = printed + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (printed);
}
