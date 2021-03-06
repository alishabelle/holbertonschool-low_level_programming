#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - print elements of double linked list
 *@h: parameter
 * Return: returns an int
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *save;
	int count = 0;

	save = h;

	while (save != NULL)
	{
		count++;
		save = save->next;
	}
	return (count);
}
