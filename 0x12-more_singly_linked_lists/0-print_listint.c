#include "lists.h"
/**
 *print_listint - the main function that prints elements
 *@h: parameter
 * Return: the return is a size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
