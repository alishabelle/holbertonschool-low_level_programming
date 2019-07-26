#include "lists.h"
/**
 *free_listint2 - function to free a node with double pointer
 *@head: parameter
 * Return: the return is void
 */
void free_listint2(listint_t **head)
{
	listint_t *space;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		space = *head;
		*head = space->next;
		free(space);
	}
}
