/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:14:44 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/15 13:52:00 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	printf("ft_isalnum('b') = %d\n", ft_isalnum('b'));
	printf("ft_isalnum('9') = %d\n", ft_isalnum('9'));
	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));
	return (0);
}*/