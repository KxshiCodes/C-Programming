/* This function divides the value pointed to by ‘a’ by the value pointed to by ‘b’. The
result of the division is stored in the integer pointed to by ‘a’, while the remainder
is stored in the integer pointed to by ‘b’. */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b); // Function Prototype

int main(void) // Main to test function code
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);

	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b) // Function Definition
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}
