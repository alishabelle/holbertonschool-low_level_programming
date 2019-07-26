#include "holberton.h"
/**
 * is_palindrome - returns 1 if string is palindrome
 *@s: parameter
 * Return: the return is an int
 */
int is_palindrome(char *s)
{
	int _strlen;

	strlen = _end_of_string(s);
	if (strlen == 0)
		return (1);
}
int _end_of_string(char *s)
{
	int x = 0;

	if (*s != '\0')
		return (1 + _end_of_string(s + 1));
	return (0);
}
