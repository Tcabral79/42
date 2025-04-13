#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isprint('l'));
	printf("L is -> %d\n", ft_isprint('L'));
	printf("9 is -> %d\n", ft_isprint('9'));
	printf("0 is -> %d\n", ft_isprint('0'));
	printf("2 is -> %d\n", ft_isprint('2'));
	printf("space is -> %d\n", ft_isprint(' '));
	printf("new line is -> %d\n", ft_isprint('\n'));
}*/
