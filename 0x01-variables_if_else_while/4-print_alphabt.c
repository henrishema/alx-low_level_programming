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
		putchar(ch);
		ch++;
		if (ch == 'e' && ch == 'q')
			continue;
	}
	return (0);
}
