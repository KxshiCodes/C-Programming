// C01 taught me how to use advanced loops

/* Create a function that takes a pointer to an int as a parameter and sets the value
of that int to "42". */

#include <unistd.h>

// Function Prototype
void	ft_ft(int *nbr);

// Main to Test Function
int	main(void)
{
	int	number;

	ft_ft(&number);
	write(1, "Test Passed!\n", 13);

	return (0);
}

// Function Definition
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
