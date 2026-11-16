#include <unistd.h>

void	ft_print_reverse_alphabet(void); // Function Prototype

int main(void)
{
	ft_print_reverse_alphabet();

	return(0);
}

void	ft_print_reverse_alphabet(void) // Function definitions
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		--c;
	}
}
