#include "main.h"


/**
 * To print_numbers - print 0-9
 * @c: char to print_numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
