#include "main.h"


/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array name
 * @n:the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");

	if (p == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
