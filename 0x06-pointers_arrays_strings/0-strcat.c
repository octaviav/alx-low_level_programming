#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int c;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[t] = src[c];
		t++;
		c++;
	}

	dest[t] = '\0';
	return (dest);
}
