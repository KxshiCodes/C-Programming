#include <unistd.h>

// Function Prototype
void	ft_print_numbers(void);

// Function definitions
void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}
