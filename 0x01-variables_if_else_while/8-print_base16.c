#include <stdio.h>

/**
 * main -main function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
