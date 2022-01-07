#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)str;
	while (n)
	{
		*x++ = c;
		n--;
	}
	return (str);
}
