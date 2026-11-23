#include <unistd.h>

void	ft_swap(int *a, int *b);

int main(void)
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

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
