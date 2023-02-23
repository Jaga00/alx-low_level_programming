#include "main.h"

/**
 * print_diagonal - diagonal lines on  terminal
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					 _putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
