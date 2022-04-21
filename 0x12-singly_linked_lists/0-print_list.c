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

	while (c != NULL)
	{
		if (c->str != NULL)
		{
			printf("[%d] %s\n", c->len, c->str);
		}
		else
		{
			printf("[0] (nill)\n");
		}
		count = count + 1;
		c = c->next;
	}
	return (count);
}