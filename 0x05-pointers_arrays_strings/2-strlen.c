#include "main.h"

/**
 * __strlen - Return the length of strings
 * @s: strings
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;

		s++;
	}
	return (longi);
}
