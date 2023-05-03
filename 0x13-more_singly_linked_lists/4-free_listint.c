#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
    listint_t *node_to_free;

    while (head != NULL)
    {
        node_to_free = head;
        head = head->next;
        free(node_to_free);
    }
}

