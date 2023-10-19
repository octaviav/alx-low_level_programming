#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t;
	int c;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
	dest[t] = src[c];
	t++;
	c++;
	}
	dest[t] = '\0';
	return (dest);
}
