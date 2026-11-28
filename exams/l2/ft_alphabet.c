#include <unistd.h>

// Function prototype.
void	ft_print_alphabet(void);

int	main(void)
{
	// Call the function that prints the alphabet.
	ft_print_alphabet();

	return (0); // End program successfully.
}

// Function definition.
void	ft_print_alphabet(void)
{
	char	c; // Declare a character variable.

	c = 'a'; // Start with the first letter.

	// Loop while c is less than or equal to 'z'.
	while (c <= 'z')
	{
		// Print the current character.
		write(1, &c, 1);

		// Move to the next character.
		c++;
	}
}