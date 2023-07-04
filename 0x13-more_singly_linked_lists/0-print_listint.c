#include "lists.h"

/**
 * print_listing - prints all the elements of a linked list
 * @h: linked list of type list_t to print
 *
 * Return: Number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
