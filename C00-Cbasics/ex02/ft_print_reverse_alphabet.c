#include <unistd.h>

// Function prototype.
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	// Call the function to print the alphabet backwards.
	ft_print_reverse_alphabet();

	return (0); // End program successfully.
}

// Function definition.
void	ft_print_reverse_alphabet(void)
{
	char	c; // Declare a character variable.

	c = 'z'; // Start with the last letter of the alphabet.

	// Keep looping while c is greater than or equal to 'a'.
	while (c >= 'a')
	{
		// Print the current character.
		write(1, &c, 1);

		// Decrease c by one to move to the previous character.
		c--;
	}
}
