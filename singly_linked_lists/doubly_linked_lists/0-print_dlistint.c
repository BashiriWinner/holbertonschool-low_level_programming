#include <stdlio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all elements
 * a dlistint_t list
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h>n);
		s++;
		h = h->next;
	}
	return (s);
}

