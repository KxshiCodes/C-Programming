void	ft_putchar(char c); // Function Prototype to print single Character.

void	write_row(int column, int x) // Function to write the middle rows of the rectangle.
{
	if (column == 0 || column == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	write_row_fl(int column, int x) // Function to write the first and last rows of the rectangle.
{
	if (column == 0)
	{
		ft_putchar('A');
	}
	else if (column == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	check_conditions(int row, int column, int x, int y) // Function to check the conditions for writing the rows of the rectangle.
{
	if (row == 0 || row == y - 1)
		write_row_fl(column, x);
	else
		write_row(column, x);
}

void	rush(int x, int y) // Main function to generate the rectangle based on the given dimensions.
{
	int	row;
	int	column;

	if (x <= 0 || y <= 0) // Error handling for invalid input values.
	{
		ft_putchar('e');
		return ;
	}

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			check_conditions(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
