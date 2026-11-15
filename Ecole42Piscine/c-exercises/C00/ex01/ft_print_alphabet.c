#include <unistd.h>

// Function Prototype
void	ft_print_alphabet(void);

// Function definitions
void	ft_print_alphabet(void)
{
	char	c;	

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		++c;
	}
}
