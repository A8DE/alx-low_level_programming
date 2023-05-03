
#include "lists.h"

/**
 * free_listint - Function frees a linked list
 * @head: Pointer listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

