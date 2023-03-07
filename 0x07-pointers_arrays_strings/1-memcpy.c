#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
