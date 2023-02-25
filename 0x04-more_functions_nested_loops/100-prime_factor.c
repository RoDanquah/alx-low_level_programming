#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (success)
 */

int main(void)

{
	long x, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
