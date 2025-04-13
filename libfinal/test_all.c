#include "libft.h"

int	main(void)
{// Variaveis
	char c = 'T';
	char d = 't';
	char n = '3';
	char h = 's';
	char e = 32;
	char q = '\n';
	char str1[] = "Tomasabcz";
	char str2[] = "Tomascabral";
	char str3[] = " 	-79b20";
	char str4[12] = "Tomascabral";
	char str5[] = "mas";
	int fd = 1;
// Funçoes
	ft_putchar_fd(c, fd);
		ft_putchar_fd(q, fd);
	ft_putstr_fd(str1, fd);
		ft_putchar_fd(q, fd);
	//ft_putchar_fd(ft_itoa(ft_strlen(str)),fd);
	printf ("%d\n", ft_strlen(str1));
	printf ("%d\n", ft_strncmp(str1, str2, ft_strlen(str1)));
	printf ("%d\n", ft_isalnum (c));
	printf ("%d\n", ft_isalnum (n));
	printf ("%d\n", ft_isalpha (c));
	printf ("%d\n", ft_isalpha (n));
	printf ("%d\n", ft_isdigit (c));
	printf ("%d\n", ft_isdigit (n));
	printf ("%d\n", ft_isascii (c));
	printf ("%d\n", ft_isascii (n));
	printf ("%d\n", ft_isascii (e));
	printf ("%d\n", ft_isprint (c));
	printf ("%d\n", ft_isprint (n));
	printf ("%d\n", ft_isprint (e));
	printf ("%d\n", ft_isprint (q));
	printf ("%c\n", ft_tolower (c));
	printf ("%c\n", ft_toupper (d));
	//ft_putchar_fd(ft_tolower(c), fd);
	//ft_putchar_fd(ft_toupper(d), fd);
	printf ("%d\n", ft_atoi (str3));
	ft_memset(str4, 65, 3);
	printf ("%s\n", str4);
	char *f = ft_memchr(str1, 99, 10);
	printf ("%s\n", f);
	ft_bzero(str4, 3);
	printf ("%s\n", str4);
	int p = ft_memcmp(str1, str2, 10);
	printf ("%d\n", p);
	f = ft_memcpy(str1, str2, 7); // atenção ao \0
	printf ("%s\n", f);
	f = ft_memmove(str1, str2, 10); // atenção ao \0
	printf ("%s\n", f);
	f = ft_strrchr(str1, 99);
	printf ("%s\n", f);
	//f = ft_strlcat(str1, str2, 5);
	printf ("%ld\n", ft_strlcat(str1, str2, 5));
	printf ("%ld\n", ft_strlcpy(str1, str2, 10));
	printf ("%s\n", ft_strnstr(str1, str5, 10));
	printf ("%s\n", ft_strrchr(str1, h));
	printf ("%p\n", ft_calloc(5, 4));
	char *b = ft_strdup(str5);
	printf ("%s\n", b);
	return(0);
}