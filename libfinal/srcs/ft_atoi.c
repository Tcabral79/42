//#include <stdio.h>
#include "libft.h"

int	ft_atoi (const char	*nbr)
{
	int	i;
	int num;
	int sig;

	i = 0;
	num = 0;
	sig = 1;
	while (nbr[i] == 32 || nbr[i] == '\n' || nbr[i] == '\f' || nbr[i] == '\v' || nbr[i] == '\r' || nbr[i] == '\t')
	{
		i++;
	}
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
		{
			sig = -sig;
		}
		i++;
	}
	while (nbr[i] >= 48 && nbr[i] <= 57)
	{
		num = (nbr[i] - 48) + (num * 10);
		i++;
	}
	return (sig * num);
}
/*int main (void)
{
	char *nbr = " 	 	 	 	+65n56";

	
	printf ("%d\n", ft_atoi(nbr));
	return (0);
}*/
