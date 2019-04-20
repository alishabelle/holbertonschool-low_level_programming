#include "holberton.h"
/**
 *argstostr - concatenates all args to a string
 *@ac: parameter
 *@av: parameter
 * Return: returns pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *ret;
	int x, y, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++, count++)
			;
	}
	ret = malloc((count + ac + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	count = 0;
	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++, count++)
			ret[count] = av[y][x];
		ret[count++] = '\n';
		if (y == ac - 1)
			ret[count++] = '\0';
	}
	return (ret);
}
