#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - function that frees doubly linked list
 *@head: parameter
 * Return: return is void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head->next != NULL)
	{
		new = head;
		head = head->next;
		free(head->prev);
	}
	free(head);
}
