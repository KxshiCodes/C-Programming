// C01 taught me how to use advanced loops

/* Create a function that takes a pointer to an int as a parameter and sets the value
of that int to "42". */

#include <unistd.h>

void	ft_ft(int *nbr); // Function Prototype

int	main(void) // Main to Test Function
{
	int	number;

	ft_ft(&number);
	write(1, "Test Passed!\n", 13);

	return (0);
}

void	ft_ft(int *nbr) // Function Definition
{
	*nbr = 42;
}
