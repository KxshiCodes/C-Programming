#include <unistd.h>

// Function prototype: declares the function before main().
void	ft_print_alphabet(void);

int	main(void)
{
	// Call the function that prints the alphabet.
	ft_print_alphabet();

	return (0); // End the program successfully.
}

// Function definition: contains the actual instructions.
void	ft_print_alphabet(void)
{
	char	c; // Declare a character variable.

	c = 'a'; // Start with the first letter of the alphabet.

	// Keep looping while c is less than or equal to 'z'.
	while (c <= 'z')
	{
		// Print the current character.
		write(1, &c, 1);

		// Increase c to the next character.
		c++;
	}
}