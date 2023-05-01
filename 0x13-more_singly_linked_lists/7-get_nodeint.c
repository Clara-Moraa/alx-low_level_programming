#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node to return, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *node;

    for (i = 0, node = head; node && i < index; i++, node = node->next)
        ;

    return (node ? node : NULL);
}
