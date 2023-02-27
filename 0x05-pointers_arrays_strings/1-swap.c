#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer
 * @b: pointer
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
