#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * strtow - splits a string into words
 * @str - string to be split
 *
 * Return - NULL if str == NULL or str == ""
 *	NULL if fail
 */

char **strtow(char *str)
{
	int i;
	int j;
	int k = 0;
	int wd = 0;
	int wlen = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wd++;
	}

	if (wd == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char *) * (wd + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < wd; i++)
	{
		for (j = k; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
			{
				break;
			}
			wlen++;
		}

		arr[i] = malloc(sizeof(char) * (wlen + 1));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < wlen; j++)
		{
			arr[i][j] = str[k];
			k++;
		}
		arr[i][j] = '\0';

		while (str[k] == ' ')
			k++;
	}
	arr[i] = NULL;

	return (arr);
}
