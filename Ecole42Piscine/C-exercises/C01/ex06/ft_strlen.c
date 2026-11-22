#include <unistd.h>

int ft_strlen(char *str);

int main(void)
{
	char *str = "Hello, World!\n";
	int length;

	length = ft_strlen(str);
	write(1, &length, sizeof(length));

	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
