#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: always 0
 */

void more _numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
