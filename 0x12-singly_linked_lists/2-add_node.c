#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node: Function adds a new node at the beginning of a linked list
 * @head: Pointer double pointer to the list_t list
 * @str: String to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode = malloc(sizeof(list_t));
    unsigned int len = 0;

    while (str[len])
    len++;

    if (!newNode)
	return (NULL);

    newNode->str = strdup(str);
    newNode->len = len;
    newNode->next = *head;
    *head = newNode;

    return (*head);
}

