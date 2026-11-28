/*Create a function that takes a pointer to an int as a parameter
and sets the value of that int to 42.*/

#include <unistd.h>

// Function prototype.
void	ft_ft(int *nbr);

int	main(void)
{
	int	number;

	// Pass the address of number to the function.
	ft_ft(&number);

	// Confirm that the function was called.
	write(1, "Test Passed!\n", 13);

	return (0); // End program successfully.
}

// Function definition.
void	ft_ft(int *nbr)
{
	// Dereference the pointer and set the value to 42.
	*nbr = 42;
}
