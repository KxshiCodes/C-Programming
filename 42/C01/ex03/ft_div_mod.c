/* This function divides ‘a’ by ‘b’ and stores the result in the integer pointed to by
‘div’. It also stores the remainder of the division of ‘a’ by ‘b’ in the integer pointed
to by ‘mod’. */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div;
	int mod;

	ft_div_mod(10, 3, &div, &mod);

	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
