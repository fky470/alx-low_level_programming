#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 * @h: pointer to list
 * @Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t count = 0;

	while (c)
	{
		if (c->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", c->len, c->str);
		}
		c = c->next;
		count += 1;
	}
	return (count);
}
