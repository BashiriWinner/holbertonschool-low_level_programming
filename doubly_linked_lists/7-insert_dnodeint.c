#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value of the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    dlistint_t *current = *h;
    unsigned int current_index = 0;
    while (current != NULL && current_index < idx)
    {
        current = current->next;
        current_index++;
    }

    if (current == NULL && current_index < idx)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current;
    new_node->prev = current->prev;
    if (current->prev != NULL)
        current->prev->next = new_node;
    current->prev = new_node;

    return (new_node);
}
