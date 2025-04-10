#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint_end -  function that adds a new node at the
 * end of a dlistint_t list
 * @head: pointer to the dlistint_t list
 * @n: data to add new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = temp;

	return (new);
}
