#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - returns a string copy to new allocated space
 *@str: string to allocate mem
 * Return: returns a pointer to a new string, same as str
 */
char *_strdup(char *str)
{
	char *ret;
	int count;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		;

	ret = malloc((count + 1) * sizeof(char));

	if (ret == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		ret[count] = str[count];
	return (ret);

}
