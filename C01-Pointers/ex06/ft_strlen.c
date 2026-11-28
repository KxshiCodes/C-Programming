/* Create a function that counts and returns the number of characters in a string. */

#include <unistd.h>

int ft_strlen(char *str); // Function Prototype

int main(void) // Main to test Function
{
	char *str = "Hello, World!\n";
	int length;

	length = ft_strlen(str);
	write(1, &length, sizeof(length));

	return (0);
}

int	ft_strlen(char *str) // Function Definition
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
