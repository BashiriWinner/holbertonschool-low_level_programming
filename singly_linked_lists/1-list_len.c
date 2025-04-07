#include <stdio.h>
#include <lists.h>

/**
 * list_len - function that returns the number of elements in a link list_t list
 * @h: header node of single linked list
 * return: a number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (0 != h)
	{
		count++;
		h = h->next;
	}
	return count;
}
