#include <stdio.h>
#include "lists.h"
/**
 *FUNCTION print_list - prints all the elements of a linked list
 * POINTER @h:to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

