#include <stdio.h>
/**
 * main - Entry point
 *
 * Description A C program that print with put function
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int c = 48;

	while (c <= 102)
	{
		putchar(c);
		if (c == 57)
			c += 39;
		c++;
	}
	putchar('\n');

	return (0);
}
