#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *y = str;
	int g;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	i = longi - 1;
	for (g = 0 ; g <= i ; g++)
	{
		if (g % 2 == 0)
	{
		_putchar(str[g]);
	}
	}
	_putchar('\n');
}
