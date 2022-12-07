#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t *new2;
	listint_t hello = {6841, NULL};
	size_t n;

	head = &hello;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->n = 9;
	new->next = head;
	head = new;

	new2 = malloc(sizeof(listint_t));
	new2->n = 22;
	new2->next = head;
	head = new2;

	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	free(new2);
	return (0);
}
