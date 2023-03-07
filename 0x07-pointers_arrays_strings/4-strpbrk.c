#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string
 * @accept: The set of bytes
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != '\0')
	{
		while (*p != '\0')
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return ('\0');
}
