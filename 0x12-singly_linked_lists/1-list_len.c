#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
