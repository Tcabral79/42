/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:52:36 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/13 10:57:41 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(args, int)));
	if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 'x'));
	if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 'X'));
	if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed = printed + ft_check_format(format[i + 1], args);
			i++;
		}
		if (format[i] == '%' && !(format[i + 1]))
		{
			write(1, "\0", 1);
		}
		else
			printed = printed + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (printed);
}

int main(void)
{
	char *str = "42";
	//long int d = 23;

	ft_printf("Char: %c%d\n", 'A', 23);
	ft_printf("String: %s\n", str);
	ft_printf("Pointer: %p\n", str);
	ft_printf("Decimal: %d\n", -123);
	ft_printf("Integer: %i\n", -456);
	ft_printf("Unsigned: %u\n", -3);
	ft_printf("Hex (lower): %x\n", 255);
	ft_printf("Hex (upper): %X\n", 255);
	ft_printf("Percent sign: %%\n");
	printf ("benfica\n");
	//printf ("%ld\n", d);
	//printf ("ola%");
	//ft_printf ("%ld\n", d);
	ft_printf ("ola%");
	return (0);
}
