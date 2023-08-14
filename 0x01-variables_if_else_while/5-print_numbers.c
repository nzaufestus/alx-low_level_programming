#include <stdio.h>

/**
 * main - program that prints single-digit numbers in base 10
 *
 * Return: Always 0.
 */
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        printf("%d\n", digit);
    }

    return (0);
}
