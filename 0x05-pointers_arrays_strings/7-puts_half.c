#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * if the odd len: n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int o, j, longi;

	longi = 0;

	for (o = 0; str[o] != '\0'; o++)
		longi++;

	j = (longi / 2);

	if ((longi % 2) == 1)
		j = ((longi + 1) / 2);

	for (o = j; str[o] != '\0'; o++)
		_putchar(str[o]);
	_putchar('\n');
}
