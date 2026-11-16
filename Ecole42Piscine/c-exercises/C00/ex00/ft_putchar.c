#include <unistd.h>

void	ft_putchar(char c); // Function prototype
// Function name, return type, and parameters before its defined
// Easier to read, organise and help prevent errors.

int	main(void)
{
	ft_putchar('a');

	return (0);
}

void	ft_putchar(char c) // Function definitions
{
	write(1, &c, 1);
}
