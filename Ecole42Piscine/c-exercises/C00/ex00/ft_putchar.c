#include <unistd.h>

// Function prototype
void	ft_putchar(char c);

// Function definitions
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
