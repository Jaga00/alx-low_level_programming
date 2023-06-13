#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the command-line arguments of program
 * into a single string.
 * @ac - number of command-line arguments.
 * @av - array of strings representing the command-line arguments.
 *
 * Return - NULL if ac == 0 or av == NULL
 *          Otherwise  a pointer to a new string, or NULL if it fails
 */

char  *argstostr(int ac, char **av)
{
	int tole = 0;
	int i;
	int in = 0;
	char *result = (char *)malloc(sizeof(char) * tole);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		tole += strlen(av[i]) + 1;
	}

	if (result == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < ac; i++)
		{
			strcpy(result + in, av[i]);
			in += strlen(av[i]);
			result[in] = '\n';
			in++;
		}
		result[in - 1] = '\0';

		return (result);
}	
