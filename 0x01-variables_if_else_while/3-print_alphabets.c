#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;
	int d;

	c = 97;
	d = 65;
	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (d < 91)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
