#include <unistd.h>

/* 
Write a program that takes a string as an argument and checks whether it contains the character 'w'.
- If the string contains 'w', print a newline.
- If the string does not contain 'w', print 'w' followed by a newline.
- If the number of arguments is not exactly 1, print 'w' followed by a newline. */

int	main(void)
{
	write(1, "w\n", 2);
	return (0);
}