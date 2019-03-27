#include "lists.h"
/**
 *add_nodeint_end - function to add node at the end
 *@head: parameter
 *@n: parameter
 * Return: the return is of type listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	ptr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head  = new;
		return (new);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
