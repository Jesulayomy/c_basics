#include "lists.h"

/**
 * listint_len
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
