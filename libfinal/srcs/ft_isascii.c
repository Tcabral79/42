#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isascii('l'));
	printf("L is -> %d\n", ft_isascii('L'));
	printf("9 is -> %d\n", ft_isascii('9'));
	printf("0 is -> %d\n", ft_isascii('0'));
	printf("2 is -> %d\n", ft_isascii('2'));
	printf("space is -> %d\n", ft_isascii(' '));
}*/
