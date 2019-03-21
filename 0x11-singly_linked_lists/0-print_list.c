#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *save;
	int count = 0;
	
	save = h;

	while (save != NULL)
	{
		if (save->str == NULL)
		{
			printf("[0] (nil)\n");
		}
     		else
		{
			printf("[%d] ", save->len);
			printf("%s\n", save->str);
		}			
		count++;
		save = save->next;
       	}
	return (count);

}
