#include <stdlib.h>
#include <string.h>
#include "libft.h"
char	*ft_strdup(const char *src)
{
	int	i;
	int	len;
	char	*copy;
	i = 0;
	len = 0;
	if (!src)
		return (NULL);
	while (src[len])
	{
	len++;
	}
	copy = (char *)malloc(sizeof(char) * (len + 1));

	if (!copy)
		return (NULL);
	while (src[i])
	{
	copy[i] = src[i];
	i++;
	}
	copy[i] = '\0';
	return (copy);
	}

/*	int	main (void)
{
	char str[] = "hello world!";
	ft_putstr(ft_strdup(str));
	return (0);
}*/
