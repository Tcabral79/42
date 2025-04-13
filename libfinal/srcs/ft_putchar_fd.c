#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main (void)
{
	char c = 'B';
	int fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}*/
