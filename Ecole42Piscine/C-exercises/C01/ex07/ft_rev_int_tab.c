#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i;

	ft_rev_int_tab(tab, size);

	for (i = 0; i < size; i++)
	{
		tab[i] += '0'; // Convert integer to character for printing
		write(1, &tab[i], 1);
	}

	return (0);
}

void ft_rev_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;
	while (start < end)
	{
		int temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}