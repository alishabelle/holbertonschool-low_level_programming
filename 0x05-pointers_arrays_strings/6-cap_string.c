#include "holberton.h"
/**
 *cap_string - the main function
 *@s: parameter
 * Return: the return is a char
 */
char *cap_string(char *s)
{
	int x, y;
	char arr[] = " \t\n,;.!?\"(){}";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (y = 0; arr[y] != '\0'; y++)
		{
			if (s[x] == arr[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
			{
				s[x + 1] = s[x + 1] - 32;
			}
		}
	}
	return (s);
}
