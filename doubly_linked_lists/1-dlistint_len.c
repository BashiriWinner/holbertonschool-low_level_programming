#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer named head and this first node
 * Return: the len of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
