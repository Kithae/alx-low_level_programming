#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit – a function that confirms non-digit chars in a sring
 * @s: the string in reference
 *
 * Return: 0, else 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen – a function the determines the length of a string
 * @s: the string in reference
 *
 * Return: the length
 */
int _strlen(char *s)
{
	Int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main -  a program that multiplies two positive numbers
 * @argc: the arguments
 * @argv: the array
 *
 * Return: the result
 */
int main(int argc, char *argv[])
{
	char *y1, *y2;
	int l1, l2, length, i, carry, digit1, digit2, *result, a = 0;

	y1 = argv[1], y2 = argv[2];
	if (argc != 3 || !is_digit(y1) || !is_digit(y2))
		errors();
	l1 = _strlen(y1);
	l2 = _strlen(y2);
	length = l1 + l2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = y1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(y2) - 1; l2 >= 0; l2--)
		{
			digit2 = y2[l2] - '0';
			carry += result[l1 + l2 + 1] + (digit1 * digit2);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
