#include <cs50.h>
#include <stdio.h>

void print_pyramid(int height);

int main(void)
{
    // Prompt user for pyramid height(int)
    int height;
    do
    {
        height = get_int("Enter height of pyramid: ");
    }
    while (height < 1 || height > 8);

    print_pyramid(height);
}

// Print a pyramid of that height custom funtion
void print_pyramid(int height)
{
    for (int row = 0; row < height; row++)
    {
        // Print spaces
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }

        // Print bricks
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
        // Skip to new line
        printf("\n");
    }
}