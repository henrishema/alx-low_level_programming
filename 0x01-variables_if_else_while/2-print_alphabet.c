#include <stdio.h>

/**
 * main - main function
 *
 * Return: will return 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putschar(ch);
	}
	putschar('\n');
	return (0);
}
