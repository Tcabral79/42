#include <unistd.h>
#include "libft.h"

void ft_putstr_fd (char	const	*str, int	fd)
{
	int i;

	i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		write (fd, &str[i], 1);
		i++;
	}
}

/*int main (void)
{
	char str[] = "Hello World!";
	int fd = 1;

	ft_putstr_fd (str,fd);
	return(0);
}*/
