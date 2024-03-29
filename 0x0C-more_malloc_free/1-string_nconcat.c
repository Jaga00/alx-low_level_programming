#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, copy_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	copy_len = s2_len > n ? n : s2_len;

	result = malloc(s1_len + copy_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, copy_len);
	result[s1_len + copy_len] = '\0';

	return (result);
}
