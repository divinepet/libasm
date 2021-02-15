#include "libasm.h"

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * -1);
		return ;
	}
	else if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_strdup_test(void)
{
	char *s;

	write(1, BLUE, 5);
	write(1, "\n\nTEST 1 (hello):\n", 18);
	write(1, GREEN, 5);
	write(1, ">>> ", 4);
	s = strdup("hello");
	write(1, s, 5);
	write(1, "\n<<< ", 5);
	s = ft_strdup("hello");
	write(1, s, 5);
}

int		main(void)
{
	write(1, YELLOW, 5);
	write(1, "\n\n\t\tTesting STRLEN", 19);
	ft_strlen_test();
	write(1, YELLOW, 5);
	write(1, "\n\n\n\t\tTesting STRCPY", 20);
	ft_strcpy_test();
	write(1, YELLOW, 5);
	write(1, "\n\n\n\t\tTesting STRCMP", 20);
	ft_strcmp_test();
	write(1, YELLOW, 5);
	write(1, "\n\n\n\t\tTesting WRITE", 19);
	ft_write_test();
	write(1, YELLOW, 5);
	write(1, "\n\n\n\t\tTesting READ", 18);
	ft_read_test();
	write(1, YELLOW, 5);
	write(1, "\n\n\n\t\tTesting STRDUP", 20);
	ft_strdup_test();
	write(1, RESET, 5);
	write(1, "\n", 1);
	return (0);
}
