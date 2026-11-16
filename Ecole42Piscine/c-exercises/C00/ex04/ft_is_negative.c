#include <unistd.h>

void	ft_is_negative(int n); // Function Prototype

int main(void)
{
	ft_is_negative('1');

	return (0);
}

void	ft_is_negative(int n) // Function Definition
{
	if (n >= 0) // Code Logic
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
