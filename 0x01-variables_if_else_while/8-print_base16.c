#include <stdio.h>

/*
 * main - Prints numbers from 0 - 9 and letters a - f.
 *
 * Return: 0
 */

int main(void)
{
	char c;

	int i;

	c = 'a';
	i = 0;
	while
		(i < 10)
		{
			putchar(i + '0');
			i++;
		}
		while (c <= 'f')
		{
				putchar(c);
				c++;
		}
		putchar('\n');
		return (0);
}
