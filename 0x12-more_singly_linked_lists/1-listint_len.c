#include "lists.h"
/**
 *listint_len - the main function
 *@h: parameter
 * Return: the return is a size_t
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
