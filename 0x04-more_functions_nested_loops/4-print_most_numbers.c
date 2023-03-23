#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers from 0 to 9.
 *
 * Return: 0 success.
 */

void print_most_numbers(void)
{
int num = 0;
while (num < 10)
{
if (num != 2 && num != 4)
putchar ('0' + num);
num++;
}
putchar('\n');

}
