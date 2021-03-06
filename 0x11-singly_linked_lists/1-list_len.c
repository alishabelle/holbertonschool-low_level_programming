#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - function returns number of elements
 *@h: paramter
 * Return: the return is an int
 */
size_t list_len(const list_t *h)
{
	const list_t *save;
	int count = 0;

	save = h;

	while (save != NULL)
	{
		count++;
		save = save->next;
	}
	return (count);
}
