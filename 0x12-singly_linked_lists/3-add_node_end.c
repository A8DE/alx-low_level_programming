#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end: Function  adds a new node at the end of a linked list
 * @head: Pointer to the list_t list
 * @str: String to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *t = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = l;
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
