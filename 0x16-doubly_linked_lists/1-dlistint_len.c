#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
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
