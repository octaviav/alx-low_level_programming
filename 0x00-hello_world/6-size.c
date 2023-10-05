#include <stdio.h>
/**
 * main - prints the size type
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu", sizeof(a));
	printf("Size of a int: %lu", sizeof(b));
	printf("Size of a long int: %lu", sizeof(c));
	printf("Size of a long long int: %lu", sizeof(c));
	printf("Size of a long float: %lu", sizeof(e));
	return (0);
}
