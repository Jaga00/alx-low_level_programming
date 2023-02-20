#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Description: 'pos or neg'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d positive\n", n);
	else if (n < 0)
	{
		printf("%d negative\n", n);

	}
	else
		printf("%d zero\n", n);
	return (0);
}
