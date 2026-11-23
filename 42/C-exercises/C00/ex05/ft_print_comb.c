#include <unistd.h>

void	ft_print_comb(void); // Function Prototype
void	print_char(int i, int j, int k); // Function Prototype

int main(void)
{
	ft_print_comb();

	return (0);
}

void	ft_print_comb(void) // Function Definition
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_char(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	print_char(int i, int j, int k) // Function Definition
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);

	if (i < '7' || j < '8' || k < '9')
	{
		write(1, ", ", 2);
	}
}
