#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the command-line arguments of program
 * into a single string.
 * @ac - number of arguments passed to the program.
 * @av - array of strings containing the arguments.
 *
 * Return - NULL if ac == 0 or av == NULL
 *          Otherwise  a pointer to a new string, or NULL if it fails
 */

char  *argstostr(int ac, char **av)
{
	int tole = 0;
	int i;
	int in = 0;
	int j = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (in = 0; av[i][in] != '\0'; in++)
			tole++;
	}

	str = malloc(sizeof(char) * tole);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (in = 0; av[i][in] != '\0'; in++)
		{
			str[j] = av[i][in];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}
