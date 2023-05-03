#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node’s data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node_to_delete;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	n = node_to_delete->n;
	*head = node_to_delete->next;
	free(node_to_delete);

	return (n);
}

