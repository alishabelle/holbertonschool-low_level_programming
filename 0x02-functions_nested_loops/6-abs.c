#include "holberton.h"
#include <stdio.h>
/**
 *_abs - prints sign with number
 *@x: parameter
 *Return: The return value is zero
 **/

int _abs(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}
