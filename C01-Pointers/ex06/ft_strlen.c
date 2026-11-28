// Create a function that counts and returns the number of characters in a string.

#include <unistd.h>

// Function prototype.
int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		length;

	// Initialise the test string.
	str = "Hello, World!\n";

	// Get the length of the string.
	length = ft_strlen(str);

	// Display the result (one byte for this simple test).
	length += '0';
	write(1, &length, 1);
	write(1, "\n", 1);

	return (0); // End program successfully.
}

// Function definition.
int	ft_strlen(char *str)
{
	int	i;

	// Start counting from zero.
	i = 0;

	// Count characters until the null terminator.
	while (str[i])
		i++;

	// Return the total number of characters.
	return (i);
}
