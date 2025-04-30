/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:35:36 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/30 13:59:07 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_str(char *str)
{
	int i;
	
	i = 0;
	if (!str)
		return (ft_print_str("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*int main (void)
{
	char s[] = "benfica";
	ft_print_str(s);
	return (0);
}*/
