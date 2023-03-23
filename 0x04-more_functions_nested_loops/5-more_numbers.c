#include "main.h"
#include <stdio.h>

/**
 *more_numbers - a function that prints 10 times the numbers
 *from 0 to 14.
 *
 *Return: 0 success.
 */

void more_numbers(void)
{
char ch;
int num = 0;

while (num <= 14)
{
	ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
				ch++;
		}
			_putchar('\n');
			num++;
}
}
