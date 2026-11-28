// Create a function that prints all digits from '0' to '9' in ascending order on one line.

#include <unistd.h>

// Function prototype.
void	ft_print_numbers(void);

int	main(void)
{
	// Call the function that prints the digits.
	ft_print_numbers();

	return (0); // End program successfully.
}

// Function definition.
void	ft_print_numbers(void)
{
	char	num; // Declare a character variable for the current digit.

	num = '0'; // Start with the character '0'.

	// Loop while num is less than or equal to '9'.
	while (num <= '9')
	{
		// Print the current digit.
		write(1, &num, 1);

		// Move to the next digit.
		num++;
	}
}
