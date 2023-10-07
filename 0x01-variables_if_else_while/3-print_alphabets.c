#include <stdio.h>
/**
 * main - Entry point
 *
 * Description A C program return o uppercase
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char c = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
