// Create a function that prints 'N' if an integer is negative, or 'P' if it is positive or zero.

#include <unistd.h>

// Function prototype.
void	ft_is_negative(int n);

int	main(void)
{
	// Call the function and pass the integer 1.
	ft_is_negative(1);

	return (0); // End program successfully.
}

// Function definition.
void	ft_is_negative(int n)
{
	// Check if n is greater than or equal to zero.
	if (n >= 0)
	{
		// If true, print P.
		write(1, "P", 1);
	}
	else
	{
		// If false, print N.
		write(1, "N", 1);
	}
}
