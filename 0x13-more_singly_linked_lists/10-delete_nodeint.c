/**
 * delete_nodeint_at_index - Deletes the node at index `index` of a
 *                           listint_t linked list.
 * @head: Pointer to a pointer to the first element of the list.
 * @index: Index of the node to delete (starting from 0).
 *
 * Return: 1 if the node was deleted successfully, or -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	prev = NULL;
	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

