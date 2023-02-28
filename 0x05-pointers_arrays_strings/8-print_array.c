#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: array pointer
 * @n: integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
