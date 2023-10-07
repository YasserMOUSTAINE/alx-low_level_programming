#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description A C program compare module of numbre between 6 and 5
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n, c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, c);
	}
	else if (c < 6 && c != 0)
	{
		printf("Last digit of %i is %i and is les than 6 not 0\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, c);
	}
	return (0);
}
