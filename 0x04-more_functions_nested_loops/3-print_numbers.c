#include "main.h"

/**
 * print_numbers - print  0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		c = i + '0';
		_putchar(c);
	}
	_putchar('\n');
}
