/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:48 by tcabral           #+#    #+#             */
/*   Updated: 2025/05/12 11:29:23 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int		count;
	char	*str;

	str = ft_itoa(n);
	count = ft_print_str(str);
	free(str);
	return (count);
}
/*int	main (void)
{
	int	n = -23;
	ft_print_int(n);
	return (0);
}*/
