/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:51 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/25 12:35:52 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include "ft_printf.h"

static int ft_put_hex(uintptr_t n)
{
    int count = 0;
    char *hex = "0123456789abcdef";

    if (n >= 16)
        count += ft_put_hex(n / 16);
    count += write(1, &hex[n % 16], 1);
    return count;
}

int ft_print_ptr(void *ptr)
{
    int count = 0;

    if (!ptr)
        return write(1, "(nil)", 5);

    count += write(1, "0x", 2);
    count += ft_put_hex((uintptr_t)ptr);
    return count;
}
