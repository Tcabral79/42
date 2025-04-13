#include "libft.h"

int	ft_strncmp(const  char	*str1, const  char  *str2, size_t size)
{

        size_t i;
        
	i = 0;
	if (size == 0)
		return (0);
	while (i < size && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i < size)
		return (str1[i] - str2[i]);
return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "hello";
	char s2[] = "helloa";
	int n = 10;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
