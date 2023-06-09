#include "lists.h"

/**
 * add_nodeint_end - Function  adds a node at the end of a linked list
 * @head: Pointer to the first element in the list
 * @n: Data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *t = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (t->next)
		t = t->next;

	t->next = newNode;

	return (newNode);
}

