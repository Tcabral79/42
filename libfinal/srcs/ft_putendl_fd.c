#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &(*s++), 1);
	write(fd, "\n", 1);
}

/*int main(void)
{
	char s[] = "banana";
	ft_putendl_fd(s, 1);
	return (0);
}*/