#include <stdio.h>
#include "main.h"

/**
  * main - the main printing funtion
  *
  * Return: Always 0 (Success)
  */


int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;


	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		sum += k;
		j = k - j;
		++i;
	}
	_putchar(sum);
	_putchar('\n');
	return (0);
}
