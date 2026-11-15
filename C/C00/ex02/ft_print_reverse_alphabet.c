#include <unistd.h>

// Function Prototype
void	ft_print_reverse_alphabet(void);

// Function definitions
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		--c;
	}
}
