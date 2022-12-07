#include "lists.h"

/**
 * print_listint.c
 *
 */
size_t print_listint(const listint_t *head)
{
	size_t nodes;

	nodes = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}
	return (nodes);
}
