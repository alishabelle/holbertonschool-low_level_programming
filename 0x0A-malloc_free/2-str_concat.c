#include "holberton.h"
/**
 *str_concat - concatenates two strings
 *@s1: input string
 *@s2: second input string
 * Reuturn: reutrns a pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int count, count2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (count = 0; s1[count]; count++)
		;
	for (count2 = 0; s2[count2]; count2++)
		;
	ret = malloc((count + ++count2) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	for (count = 0; s1[count]; count++)
		ret[count] = s1[count];
	for (count2 = 0; s2[count2]; count2++)
		ret[count + count2] = s2[count2];
	return (ret);
}
