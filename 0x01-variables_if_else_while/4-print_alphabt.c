#include <stdio.h>

/**
 * main - main function
 *
 * Return: return 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		++ch;
	}
	return (0);
}
