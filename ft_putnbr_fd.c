

#include "libft.h"

void	min_int(int fd)
{
	char	*s;
	int		i;

	i = 0;
	s = "-2147483648";
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
	}
	if (n > 9 && n <= 2147483647)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
	if (n == -2147483648)
	{
		min_int(fd);
	}
}
