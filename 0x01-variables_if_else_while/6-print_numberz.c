#include <stdio.h>
/**
 * main - Entry point
 *
 * Description A C program print digit numbers
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar("\n");

	return (0);
}
