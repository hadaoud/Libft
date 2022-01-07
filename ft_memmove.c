
#include "libft.h"

void	*ft_memmove(void *dst, const void *sr, size_t len)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	if (!dst && !sr)
		return (NULL);
	dest = (unsigned char *)dst;
	src = (unsigned char *)sr;
	if (src < dest)
	{
		while (i++ < len)
			dest[len - i] = src[len - i];
	}
	else
	{
		while (len-- > 0)
			*(dest++) = *(src++);
	}
	return (dst);
}
