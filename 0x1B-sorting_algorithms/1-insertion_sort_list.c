#include "sort.h"

/**
 *swapper - function that swaps nodes
 *@node: parameter
 * Return: retruns void
 */
void swapper(listint_t *node)
{
	listint_t *uno, *dos, *sig;


	if (node->prev == NULL)
		return;
	uno = node->prev;
	dos = uno->prev;
	sig = node->next;
	if (dos != NULL)
		dos->next = node;
	node->prev = dos;
	node->next = uno;
	uno->prev = node;
	uno->next = sig;
	if (sig != NULL)
		sig->prev = uno;
}

/**
 * insertion_sort_list - algo for insertion sort
 *@list: parameter
 * Return: returns void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *jawn, *store;

	if (*list == NULL || list == NULL)
		return;

	jawn = (*list)->next;
	while (jawn != NULL)
	{
		if (jawn->prev->n > jawn->n)
		{
			store = jawn->next;
			while (jawn->prev != NULL)
			{
				if (jawn->n < jawn->prev->n)
				{
					swapper(jawn);
					while ((*list)->prev != NULL)
						(*list) = (*list)->prev;
					print_list(*list);
				}
				else
					break;
			}
			jawn = store;
		}
		else
			jawn = jawn->next;
	}
}
