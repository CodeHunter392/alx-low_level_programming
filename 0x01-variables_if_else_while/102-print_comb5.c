#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space and comma, in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens1, ones1, tens2, ones2;

    for (tens1 = 0; tens1 <= 9; tens1++)
    {
        for (ones1 = 0; ones1 <= 9; ones1++)
        {
            for (tens2 = tens1; tens2 <= 9; tens2++)
            {
                int start = (tens1 == tens2) ? ones1 : 0;
                for (ones2 = start; ones2 <= 9; ones2++)
                {
                    putchar(tens1 + '0');
                    putchar(ones1 + '0');
                    putchar(' ');
                    putchar(tens2 + '0');
                    putchar(ones2 + '0');

                    if (tens1 != 9 || ones1 != 8 || tens2 != 9 || ones2 != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

void putchar(int c)
{
    write(1, &c, 1);
}

