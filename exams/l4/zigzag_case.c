/* 
Create a function called zigzag_case that takes a string as a parameter
and displays it with alternating uppercase and lowercase characters.
- Characters at even positions (0-indexed) must be uppercase.
- Characters at odd positions must be lowercase.
- If the string is NULL, do nothing.
- Print the result followed by a newline. */

#include <unistd.h>

// Function prototype.
void	zigzag_case(char *str);

int	main(void)
{
	// Test the function with a string.
	zigzag_case("hello world");

	return (0); // End program successfully.
}

// Function definition.
void	zigzag_case(char *str)
{
	int	i;

	// Do nothing if the string is NULL.
	if (!str)
		return ;

	// Start at the first character.
	i = 0;

	// Loop through the string until the null terminator.
	while (str[i])
	{
		// Convert characters at even positions to uppercase.
		if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		// Convert characters at odd positions to lowercase.
		else if (i % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		// Display the current character.
		write(1, &str[i], 1);

		// Move to the next position.
		i++;
	}

	// Print a newline after the string.
	write(1, "\n", 1);
}
