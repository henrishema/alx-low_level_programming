#include <stdio.h>

/**
 * main - orginal function
 *
 * Return: return 0
 */
int main(void)
{
	char c, ch;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
