#include "libft.h"

int	nbr_len(long nbr)
{
	long	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	i = nbr_len(n);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (n == 0)
		ptr[i] = '0';
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		ptr[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		ptr[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	return (ptr);
}
int main ()
{
	printf("%s", ft_itoa(123));
}
