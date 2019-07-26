#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint_end - function that adds a node at the end
 *@head: parameter
 *@n: parameter
 * Return: returns a dlistint_t type
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);

	last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	new->next = NULL;
	return (new);
}
