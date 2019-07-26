#include <stdio.h>
#include "holberton.h"
/**
*print_to_98 - The main function
*@n: parameter
*Return: The return value is zero
**/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n++);
	}
	while (n > 98)
	{
		printf("%d, ", n--);
	}
	printf("98\n");
}
