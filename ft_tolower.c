
#include "libft.h"

int	ft_tolower(int ptr)
{
	if (ptr >= 'A' && ptr <= 'Z')
		ptr = ptr + 32;
	return (ptr);
}
