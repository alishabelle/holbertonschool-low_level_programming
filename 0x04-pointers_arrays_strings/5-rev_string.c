#include "holberton.h"
/**
 *rev_string - the main function
 *@s: parameter
 */
void rev_string(char *s)
{
	int length, x;
	char temp;


	for (length = 0; s[length] != 0; length++)
		;
	length--;
	for (x = 0; length > x; x++)
	{
		temp = s[length];
		s[length] = s[x];
		s[x] = temp;
		length--;
	}
}
