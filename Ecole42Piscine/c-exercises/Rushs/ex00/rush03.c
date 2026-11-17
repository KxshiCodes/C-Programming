void	ft_putchar(char c);

void	rush(int x, int y);
void	check_conditions(int row, int column, int x, int y);
void	write_row_fl(int column, int x); 
void	write_row(int column, int x); 

void	rush(int x, int y) // Main function to generate the rectangle based on the given dimensions.
{
	int	row, column; // Variables to keep track of the current row being processed.

	if (x <= 0 || y <= 0) // Error handling for invalid input values.
	{
		ft_putchar('e'); 
		return ;
	}

	row = 0; // Initialise the row counter to 0.
	while (row < y) // Loop through each row of the rectangle.
	{
		column = 0;
		while (column < x)
		{
			check_conditions(row, column, x, y); // Call the function to check the conditions and write the appropriate character.
			column++;
		}
		ft_putchar('\n'); // Print a newline character after each row.
		row++;
	}
}

void	check_conditions(int row, int column, int x, int y) // Function to check the conditions for writing the rows of the rectangle.
{
	if (row == 0 || row == y - 1)
		write_row_fl(column, x);
	else
		write_row(column, x);
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
