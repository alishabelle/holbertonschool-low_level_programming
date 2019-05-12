#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - function to get node at certain index
 *@head: parameter
 *@index: parameter
 * Return: returns type dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
