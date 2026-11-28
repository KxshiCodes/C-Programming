#include <unistd.h>

void	ft_putchar(char c); // Function prototype

int	main(void)
{
	ft_putchar('a');

	return (0);
}

void	ft_putchar(char c) // Function definitions
{
	write(1, &c, 1);
}

/* C00 taught me how to write functions, how they work as well as how loops operate. */