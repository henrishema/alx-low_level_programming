#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to determine upper case
 * @c: print int
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
