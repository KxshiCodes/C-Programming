void	ft_putchar(char c);

void	write_row(int column, int x)
{
	if (column == 0 || column == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	write_row_fl(int column, int x)
{
	if (column == 0 || column == x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	check_conditions(int row, int column, int x, int y)
{
	if (row == 0 || row == y - 1)
		write_row_fl(column, x);
	else
		write_row(column, x);
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (x <= 0 || y <= 0)
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
