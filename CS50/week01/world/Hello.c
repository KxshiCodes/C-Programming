#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets the user to input their name
    string answer = get_string("What's your name? ");
    // Prints out a greeting followed by user's name
    printf("hello, %s\n", answer);
}