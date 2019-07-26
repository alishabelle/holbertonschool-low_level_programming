#include "holberton.h"
/**
 *_atoi - the main function
 *@s: parameter
 * Return: the return is an integer
 */
int _atoi(char *s)
{
	char *sub;
	int ret = 0;
	signed char fine = 1;

	for (sub = s; (*sub < '0' || *sub > '9') && *sub; sub++)
	{
		if (*sub == '-')
			fine = -fine;
	}
	for (; *sub >= '0' && *sub <= '9'; sub++)
	{
		ret *= 10;
		if (fine == -1)
			ret -= *sub - '0';
		else
			ret += *sub - '0';
	}
	return (ret);
}
