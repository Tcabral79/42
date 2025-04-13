#include "libft.h"
//#include <stddef.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (0);
}

/*memchr searches for the first occurrence of the character c (an unsigned
char) in the first n bytes of the string pointed to, by the argument s.

the code below is used to test the function*/

/*#include <stdio.h>

int main () {
   const char str[] = "Mdaje roma daje";
   const char c1 = 'm';
   char *r;

   r = ft_memchr(str, c1, 20);

   printf("String search of %c is -> %s\n", c1, r);

   r = ft_memchr(str, c1, 2);

   printf("String search of %c is -> %s\n", c1, r);

   return(0);
}*/
