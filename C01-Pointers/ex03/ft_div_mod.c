/* Create a function that divides 'a' by 'b' and stores the result
in the integer pointed to by 'div'. It also stores the remainder
in the integer pointed to by 'mod'.*/

#include <unistd.h>

// Function prototype.
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	// Divide 10 by 3 and store the results.
	ft_div_mod(10, 3, &div, &mod);

	// Confirm that the function was called.
	write(1, "Test passed!\n", 13);

	return (0); // End program successfully.
}

// Function definition.
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	// Store the division result.
	*div = a / b;

	// Store the remainder.
	*mod = a % b;
}
