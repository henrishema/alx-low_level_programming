#include "main.h"

/**
 * print_most_numbers - print nmbrs
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
		{
			_putchar ('0' + i);
		}
	}
	_putchar ('\n');
}
