#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= '0' && arg <= '9')
			|| (arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isalnum('l'));
	printf("L is -> %d\n", ft_isalnum('L'));
	printf("9 is -> %d\n", ft_isalnum('9'));
	printf("0 is -> %d\n", ft_isalnum('0'));
	printf("2 is -> %d\n", ft_isalnum('2'));
	printf("space is -> %d\n", ft_isalnum(' '));
}*/
