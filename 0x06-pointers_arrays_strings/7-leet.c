#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: string.
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_table[256] = {0};
	char *leet_str = str;

	leet_table['a'] = '4';
	leet_table['A'] = '4';
	leet_table['e'] = '3';
	leet_table['E'] = '3';
	leet_table['o'] = '0';
	leet_table['O'] = '0';
	leet_table['t'] = '7';
	leet_table['T'] = '7';
	leet_table['l'] = '1';
	leet_table['L'] = '1';

	i = 0;
	while (str[i])
	{
		j = (unsigned char) str[i];
		if (leet_table[j])
		{
			leet_str[i] = leet_table[j];
		}
		i++;
	}
	return (leet_str);

}
