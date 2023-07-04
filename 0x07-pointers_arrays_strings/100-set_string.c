#include "main.h"


/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to cahr
 * Return: 0 always (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
