#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_list - frees memory space
 *@head: parameter
 * Return: the return is void
 */
void free_list(list_t *head)
{
	list_t *go;

	while (head != NULL)
	{
		go = head;
		head = head->next;
		free(go);
	}
}
