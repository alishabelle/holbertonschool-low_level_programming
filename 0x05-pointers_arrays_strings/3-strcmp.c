#include "holberton.h"
/**
 *_strcmp - the main function
 *@s1: parameter
 *@s2: parameter
 * Return: the return is an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
