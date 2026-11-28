#include <unistd.h>

// Function prototypes.
void	ft_print_comb(void);
void	print_char(char i, char j, char k);

int	main(void)
{
	// Start generating the combinations.
	ft_print_comb();

	return (0);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0'; // First digit starts at 0.

	// First digit can go up to 7.
	while (i <= '7')
	{
		j = i + 1; // Second digit must be greater than the first.

		// Second digit can go up to 8.
		while (j <= '8')
		{
			k = j + 1; // Third digit must be greater than the second.

			// Third digit can go up to 9.
			while (k <= '9')
			{
				// Print the current three-digit combination.
				print_char(i, j, k);

				// Move to the next third digit.
				k++;
			}
			// Move to the next second digit.
			j++;
		}
		// Move to the next first digit.
		i++;
	}
}

void	print_char(char i, char j, char k)
{
	// Print the three digits individually.
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);

	// Print a comma and space unless this is the last combination.
	if (i < '7' || j < '8' || k < '9')
	{
		write(1, ", ", 2);
	}
}
