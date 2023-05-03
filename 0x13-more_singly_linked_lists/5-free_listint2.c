#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
    listint_t *node_to_free;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        node_to_free = *head;
        *head = (*head)->next;
        free(node_to_free);
    }

    *head = NULL;
}

