#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *c;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (head != NULL)
		{
			c = *head;
			free(c);
			*head = (*head)->next;
		}
		
		*temp = NULL;
	}
}
