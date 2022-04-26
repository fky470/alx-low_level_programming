#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (temp != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free (temp);
		}
	}
}
