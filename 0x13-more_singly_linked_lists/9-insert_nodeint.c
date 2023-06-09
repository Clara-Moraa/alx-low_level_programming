#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 *                            listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer to store in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *new_node, *current_node = *head;
        unsigned int node_idx = 0;

        new_node = malloc(sizeof(listint_t));
        if (!new_node)
                return (NULL);

        new_node->n = n;

        if (idx == 0)
        {
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }

        while (current_node)
        {
                if (node_idx == idx - 1)
                {
                        new_node->next = current_node->next;
                        current_node->next = new_node;
                        return (new_node);
                }
                node_idx++;
                current_node = current_node->next;
        }

        free(new_node);
        return (NULL);
}

