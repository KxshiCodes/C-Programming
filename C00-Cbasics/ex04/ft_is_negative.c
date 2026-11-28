#include <unistd.h>

// Function prototype: declares the function.
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
		// If true, print P (Positive).
		write(1, "P", 1);
	}
	else
	{
		// If false, print N (Negative).
		write(1, "N", 1);
	}
}