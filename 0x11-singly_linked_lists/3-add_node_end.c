#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	 unsigned int x;
	 list_t *new;

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
	 new->next = NULL;
	 *head = new;
	 return (new);
 }
