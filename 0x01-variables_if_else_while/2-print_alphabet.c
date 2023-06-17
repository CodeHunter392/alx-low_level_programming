#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lowercase
 * stored in the variable letter.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    
    putchar('\n');

    return (0);
}

