#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src && !n)
		return (0);
	if (find[0] == '\0' || find == src)
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] == find[j] && (i + j) < n)
		{
			if (src[i + j] == '\0' && find[j] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (0);
}

/*locate a substring in a string*/