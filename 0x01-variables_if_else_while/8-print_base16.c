#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: prints numbers of base 16
 * starting from 0
 *
 * Return: always 0 (Success)
 */
int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    putchar('\n');

    return 0;
}
