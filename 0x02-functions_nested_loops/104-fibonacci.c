#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count;
unsigned long int fib1 = 1, fib2 = 2, sum;
printf("%lu, %lu, ", fib1, fib2);
for (count = 3; count <= 98; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);
if (count < 98)
printf(", ");
fib1 = fib2;
fib2 = sum;
}
printf("\n");
return (0);
}
