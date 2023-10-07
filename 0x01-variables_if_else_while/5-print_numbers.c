#include <stdio.h>
/**
 * main - Entry point
 *
 * Description A C program that print single digit number
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
