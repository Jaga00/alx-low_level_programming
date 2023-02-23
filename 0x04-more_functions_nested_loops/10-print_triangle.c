#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer
 * Return:void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return (0);
	}
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
