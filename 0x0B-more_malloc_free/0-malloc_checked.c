#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *malloc_checked
 *@b: parameter
 * Return: the return is void
 */
void *malloc_checked(unsigned int b)
{
	void *cream;

	cream = malloc(b);
	if (cream == NULL)
		exit(98);
	return (cream);
}
