#include <unistd.h>

void	ft_print_numbers(void); // Function Prototype

int main(void)
{
	ft_print_numbers();

	return (0);
}

void	ft_print_numbers(void) // Function definitions
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}
