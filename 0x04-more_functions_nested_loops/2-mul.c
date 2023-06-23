#include "mul.h"

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
    int product = 0;
    int sign = 1;

    if (a < 0)
    {
        sign = -sign;
        a = -a;
    }

    if (b < 0)
    {
        sign = -sign;
        b = -b;
    }

    while (b > 0)
    {
        product += a;
        b--;
    }

    return sign * product;
}

