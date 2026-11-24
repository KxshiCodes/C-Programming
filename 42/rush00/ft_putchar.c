#include <unistd.h>

void	ft_putchar(char c) // Our Print Function
{
	write(1, &c, 1); // Location we write to, the address of the character, and the number of bytes to write
}
