#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - function to print elements of doubly linked list
 *@h: parameter
 * Return: returns an int
 */
size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *save;
	int count = 0;

	save = h;

	while (save != NULL)
	{
		printf("%d\n", save->n);
		save = save->next;
		count++;

	}
	return (count);
}
