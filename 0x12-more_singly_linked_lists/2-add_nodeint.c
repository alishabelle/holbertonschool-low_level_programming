#include "lists.h"
/**
 *add_nodeint - the main function to add a node at beginning
 *@head: parameter
 *@n: parameter
 * Return: the return is of type listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
