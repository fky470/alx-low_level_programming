#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	unsigned int count = 0;

	c = h;
	while (c)
	{
		printf("%d\n", c->n);
		count++;
		c = c->next;
	}
	return (count);
}
