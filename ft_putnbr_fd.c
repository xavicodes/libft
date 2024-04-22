

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int digit;

        digit = 0;
	if (n < 0)
	{
		if (n == -2147483648)
                {
			write(fd, "-2147483648", 12);
                        return;
                }
                write(fd, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		digit = (n % 10) + '0';
		ft_putchar_fd(digit, fd);
	}
}

