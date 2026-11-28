// Write a program that displays the alphabet, with even letters in
// uppercase and odd letters in lowercase, followed by a newline.
// Only the write function is allowed.

#include <unistd.h>

int	main(void)
{
	char	c;

	// Start with the first letter of the alphabet.
	c = 'a';

	// Loop through the alphabet until z.
	while (c <= 'z')
	{
		// Check if the letter's position is even.
		if ((c - 'a') % 2 == 0)
			c -= 32; // Convert lowercase to uppercase.

		// Display the current letter.
		write(1, &c, 1);

		// Convert uppercase back to lowercase before incrementing.
		if (c >= 'A' && c <= 'Z')
			c += 32;

		// Move to the next letter.
		c++;
	}

	// Print a newline after the alphabet.
	write(1, "\n", 1);

	return (0); // End program successfully.
}
