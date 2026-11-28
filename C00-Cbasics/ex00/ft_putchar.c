// Create a function that prints the character passed to it.
// Use write() to display exactly one character.

#include <unistd.h>

// Function prototype.
void	ft_putchar(char c);

int	main(void)
{
	// Call ft_putchar and pass the character 'a'.
	ft_putchar('a');

	return (0);
}

// Function definition.
void	ft_putchar(char c)
{
	// Display the character passed to the function.
	write(1, &c, 1);
}