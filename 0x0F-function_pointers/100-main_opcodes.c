#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - a program that prints the opcodes
 * @a: function (main) address
 * @n: total printed bytes
 *
 * Return: result, else error
 */
void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[i]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes
 * @argc: total passed arguments
 * @argv: an array
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, y);
	return (0);
}
