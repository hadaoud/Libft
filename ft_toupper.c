
#include "libft.h"

int	ft_toupper(int ptr)
{
	if (ptr >= 'a' && ptr <= 'z')
		ptr = ptr - 32;
	return (ptr);
}
