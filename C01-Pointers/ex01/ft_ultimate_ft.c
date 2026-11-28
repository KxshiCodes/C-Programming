/* Create a function that takes a pointer to a pointer to a pointer to a pointer to a
pointer to a pointer to a pointer to a pointer to a pointer to an int as a parameter
and sets the value of that int to “42” */

#include <unistd.h>

// Function prototype.
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nbr;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;

	// Initialise the variable and link the pointers.
	nbr = 35;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	// Pass the address of the eighth pointer.
	ft_ultimate_ft(&ptr8);

	// Display the updated value.
	write(1, &nbr, 1);

	return (0); // End program successfully.
}

// Function definition.
void	ft_ultimate_ft(int *********nbr)
{
	// Dereference nine times to modify the original integer.
	*********nbr = 42;
}