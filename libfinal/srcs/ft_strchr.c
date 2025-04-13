#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

/*This returns a pointer to the first occurrence of the character
c in the string str, or NULL if the character is not found.

the code below is used to test the function

#include <stdio.h>
int main ()
{
	const char str[] = "daje roma daje";
	const char ch = 'm';
	char *res;

	res = ft_strchr(str, ch);

	printf("String after %c is -> %s\n", ch, res);

	return(0);
}
*/