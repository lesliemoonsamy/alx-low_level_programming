#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index
 * of a dlistint_t linked list
 *
 * @head: Head of list
 * @index: Node index to delete
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	h1 = *head;

	if (index == 0)
	{
		*head = h1->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(h1);
		return (1);
	}

	i = 0;
	while (h1 != NULL)
	{

		if (i == index)
		{
			h2 = h1->prev;
			if (h1->next != NULL)
				h1->next->prev = h2;
			free(h1);
			return (1);
		}

		h1 = h1->next;
		i++;
	}

	return (-1);
}
