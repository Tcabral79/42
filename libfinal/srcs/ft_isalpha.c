#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isalpha('l'));
	printf("L is -> %d\n", ft_isalpha('L'));
	printf("9 is -> %d\n", ft_isalpha('9'));
	printf("0 is -> %d\n", ft_isalpha('0'));
	printf("2 is -> %d\n", ft_isalpha('2'));
	printf("space is -> %d\n", ft_isalpha(' '));
}*/
