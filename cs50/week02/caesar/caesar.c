#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Incorrect, Try again\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext:  "); // Prompt user for plaintext

    printf("ciphertext: "); // Print ciphertext label

    // For each character in the plaintext:
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isupper(plaintext[i]))
        {
            // Rotate the character if it's a letter
            plaintext[i] = (plaintext[i] - 'A' + key) % 26 + 'A';
        }
        else if (islower(plaintext[i]))
        {
            plaintext[i] = (plaintext[i] - 'a' + key) % 26 + 'a';
        }

        printf("%c", plaintext[i]);
    }

    printf("\n");

    return 0;
}

// This problem taught me how to use command-line arguments, strings, loops,
// functions, indexing, and character manipulation to encrypt text in C.