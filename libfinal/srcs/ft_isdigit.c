#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isdigit('l'));
	printf("L is -> %d\n", ft_isdigit('L'));
	printf("9 is -> %d\n", ft_isdigit('9'));
	printf("0 is -> %d\n", ft_isdigit('0'));
	printf("2 is -> %d\n", ft_isdigit('2'));
	printf("space is -> %d\n", ft_isdigit(' '));
}*/
