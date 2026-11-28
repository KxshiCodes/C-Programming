/* Create a function that divides the value pointed to by 'a' by the
value pointed to by 'b'. Store the division result in 'a' and the remainder in 'b'.*/

#include <stdio.h>

// Function prototype.
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	// Initialise the two integers.
	a = 10;
	b = 3;

	// Pass the addresses of both integers.
	ft_ultimate_div_mod(&a, &b);

	// Display the updated values.
	printf("%d, %d\n", a, b);

	return (0); // End program successfully.
}

// Function definition.
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	// Calculate the division result and remainder.
	div = *a / *b;
	mod = *a % *b;

	// Store the results in the original integers.
	*a = div;
	*b = mod;
}