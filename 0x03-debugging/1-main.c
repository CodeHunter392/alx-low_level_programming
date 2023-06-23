#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar(i + '0');  /* Convert i to character */
        i++;  /* Increment i to prevent infinite loop */
    }

    printf("\nInfinite loop avoided! \\o/\n");

    return (0);
}
