#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argv: number of command line argument.
 * @argc: array that contains the program command line argument.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
