#include <unistd.h> // Gives us access to the write() function.

// Function prototype: tells C that ft_putchar exists.
void	ft_putchar(char c);

int	main(void)
{
	// Call ft_putchar and pass the character 'a' to it.
	ft_putchar('a');

	return (0); // End the program successfully.
}

// Function definition: explains what ft_putchar actually does.
void	ft_putchar(char c)
{
	// Display one character on the screen.
	write(1, &c, 1);
}