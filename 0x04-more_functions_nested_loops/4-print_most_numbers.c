#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		c = i + '0';
		_putchar(c);
	}
	 _putchar('\n');
}
