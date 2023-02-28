#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of 2 intergers.
 * @a: The 1st integer to be swapped.
 * @b: The 2nd integer to be swapped.
 *
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*Prototype of function that swaps values of 2 integers. */

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
