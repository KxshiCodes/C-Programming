/* Create a function that displays a string of characters on the standard output */

#include <unistd.h>

void	ft_putstr(char *str); // Function Prototype

int main(void)
{
	ft_putstr("Hello, World!\n"); // Main to test function code

	return (0);
}

void	ft_putstr(char *str) // Function Definition
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
