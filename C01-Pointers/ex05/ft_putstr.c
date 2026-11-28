// Create a function that displays a string of characters on the standard output.

#include <unistd.h>

// Function prototype.
void	ft_putstr(char *str);

int	main(void)
{
	// Call the function with a test string.
	ft_putstr("Hello, World!\n");

	return (0); // End program successfully.
}

// Function definition.
void	ft_putstr(char *str)
{
	int	i;

	// Start at the first character.
	i = 0;

	// Loop until the null terminator is reached.
	while (str[i])
	{
		// Display the current character.
		write(1, &str[i], 1);
		i++;
	}
}
