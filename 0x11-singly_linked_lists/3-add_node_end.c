#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node_end - function to add a node at the end of a link list
 *@head: parameter
 *@str: parameter
 * Return: the return is a list_t type
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int x;
	list_t *new;
	List_t *old;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str != '\0')
	{
		for (x = 0; new->str[x] != '\0'; x++)
		{
			;
		}
	}

	new->len = x;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		old = *head;
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
		return (new);
	}
}
