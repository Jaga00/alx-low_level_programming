#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: string to append to @dest
 * @dest: destiation string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
