#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: prefix measured.
 *
 * Return: bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	char *p = s;

	while (*p && strchr(accept, *p))
	{
		count++;
		p++;
	}
	return (count);
}
