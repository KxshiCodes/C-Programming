/* 
- Create a function that sorts an array of integers in ascending order.
- The function takes two arguments: a pointer to an int and the number of elements
in the array. */

#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {5, 2, 9, 1, 5, 6};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i;

	ft_sort_int_tab(tab, size);

	for (i = 0; i < size; i++)
	{
		tab[i] += '0'; // Convert integer to character for printing
		write(1, &tab[i], 1);
	}

	return (0);
}

void ft_sort_int_tab(int *tab, int size)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}	

