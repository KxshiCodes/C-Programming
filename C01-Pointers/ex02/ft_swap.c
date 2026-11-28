/* Create a function that swaps the values of two integers using their addresses received
as parameters. */

#include <unistd.h>

// Function prototype.
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	// Initialise the two integers.
	a = 3;
	b = 5;

	// Pass the addresses of both integers.
	ft_swap(&a, &b);

	// Convert the integers to characters for display.
	a += '0';
	b += '0';

	// Display the swapped values.
	write(1, &a, 1);
	write(1, &b, 1);

	return (0); // End program successfully.
}

// Function definition.
void	ft_swap(int *a, int *b)
{
	int	temp;

	// Store the value of a temporarily.
	temp = *a;

	// Copy the value of b into a.
	*a = *b;

	// Copy the original value of a into b.
	*b = temp;
}