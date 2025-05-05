/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:13:43 by tcabral           #+#    #+#             */
/*   Updated: 2025/04/21 16:05:21 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*void to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c)
		*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "benfica";

	printf("Before: %s\n", str);
	ft_striteri(str, to_upper_even);
	printf("After:  %s\n", str);
	return (0);
}*/