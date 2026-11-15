#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    double L = (double) letters / words * 100;
    double S = (double) sentences / words * 100;
    double index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);

    // Print the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}

int count_letters(string text)
{
    int count = 0;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        // look at one character
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    // Return the number of letters in text
    return count;
}

int count_words(string text)
{
    int count = 1;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        // look at one word
        if (isblank(text[i]))
        {
            count++;
        }
    }
    // Return the number of words in text
    return count;
}

int count_sentences(string text)
{
    int count = 0;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        // look at one sentence
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count++;
        }
    }
    return count; // Return the number of sentences in text
}

// This pset taught me how to work with strings and characters,
// use functions and loops, perform calculations, and make decisions with conditionals in C.