/* Create a function that swaps the values of two integers using their addresses received
as parameters. */

#include <unistd.h>

void	ft_swap(int *a, int *b); // Function Prototype

int main(void) // Main to test function code
{
	int a = 3;
	int b = 5;

	ft_swap(&a, &b);

	a += '0';
	b += '0';

	write(1, &a, 1);
	write(1, &b, 1);

	return (0);
}

void	ft_swap(int *a, int *b) // Function Definition
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
