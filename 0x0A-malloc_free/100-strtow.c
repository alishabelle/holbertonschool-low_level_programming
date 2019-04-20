#include "holbeton.h"

/**
 * strtow - splits a string with words separated by spaces to an array of words
 * @str: string to split
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	char **array;
	int wordc = 0, cc, x, y;

	for (x = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++)
			{
				if (x == y)
					wordc++;
			}
			y = x;
		}
	}
	printf("Words in *str: %d\n", ++wordc);
	array = malloc(++wordc * sizeof(char *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (wordc = 0, cc = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++, cc++)
			{
				if (x == y)
					wc++;
			}
			y = x;
		}
		printf("Characters in word %d: %d\n", ++wordc, ++cc);
		array[wordc] = malloc(++cc * sizeof(char));
		if (array[wordc] == NULL)
		{
			for (x = 0; x < wordc; x++)
				free(array[wordc]);
			free(array);
			return (NULL);
		}
	}
	for (wordc = 0, cc = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++, cc++)
			{
				if (x == y)
					wc++;
			}
			y = x;
			array[wordc][cc] = str[x];
		}
	}
	return (array);
}
