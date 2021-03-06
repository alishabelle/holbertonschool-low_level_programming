#include "lists.h"
/**
 *free_listint - the function to free a node
 *@head: parameter
 * Return: the return is void
 */
void free_listint(listint_t *head)
{
	listint_t *space;

	while (head != NULL)
	{
		space = head;
		head = head->next;
		free(space);
	}
}
