#include <unistd.h>

// Function prototype.
void	ft_print_numbers(void);

int	main(void)
{
	// Call the function that prints numbers.
	ft_print_numbers();

	return (0); // End program successfully.
}

// Function definition.
void	ft_print_numbers(void)
{
	char	num; // Store the current digit as a character.

	num = '0'; // Start with the character 0.

	// Keep looping while num is less than or equal to '9'.
	while (num <= '9')
	{
		// Print the current character.
		write(1, &num, 1);

		// Move to the next character.
		num++;
	}
}
