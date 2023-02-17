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
      n = rand()  - RAND_MAX / 2;

      printf("%d \n", n);

      return (0);
}
