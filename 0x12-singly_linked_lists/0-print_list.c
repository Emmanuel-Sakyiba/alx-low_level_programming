#include "lists.h"

/**
 * print_list- A function that prints all the elements of a list_t list
 *
 * @h: pointer to the list_t list to print
 *
 * Return:the total number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}

	return (p);
}
