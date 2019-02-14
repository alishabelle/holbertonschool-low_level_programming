#include <stdio.h>
#include "holberton.h"
/**
*main - The main function
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
