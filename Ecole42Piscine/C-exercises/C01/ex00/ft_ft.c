void	ft_ft(int *nbr);

int main(void)
{
	int number;

	ft_ft(&number);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
