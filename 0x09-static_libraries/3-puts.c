#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
