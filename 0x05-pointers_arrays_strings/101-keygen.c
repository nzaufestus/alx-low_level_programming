#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int i, sum, n;
sum = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
pass[i] = rand() % 94;  /* Use 94 to cover printable ASCII characters */
sum += pass[i];
putchar(pass[i] + 33);  /* Convert to printable character range */
if ((2772 - sum) < 94)
{
n = 2772 - sum;
sum += n;
putchar(n + 33);  /* Convert to printable character range */
break;
}
}
putchar('\n');
return (0);
}
