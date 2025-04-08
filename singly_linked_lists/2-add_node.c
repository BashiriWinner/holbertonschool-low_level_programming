#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Function that adds a new node at the begining
 * of a list_t list
 * @head: Pointer to the pointer at the head of the list
 * @str: String to be added to the new node
 * Return: Adrress of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lens = 0;

	if (str == NULL)
		return (NULL);

	while (str[lens] != '\0')
	{
		lens++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = lens;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
