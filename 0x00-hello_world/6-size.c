#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'About size'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long: %u byte(s)\n", sizeof(long));
	printf("Size of a long long: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	printf("Size of a double: %u byte(s)\n", sizeof(double));
	printf("Size of a long double: %u byte(s)\n", sizeof(long double));
	return (0);
}

