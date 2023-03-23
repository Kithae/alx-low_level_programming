#include "main.h"
#include <stdio.h>

/**
 *print_numbers - a function that prints the numbers from 0 to 9.
 *
 * Return: 0 success.
 */

void print_numbers(void)
{
int num = 0;
while (num < 10)
{
putchar ('0' + num);
num++;
}
putchar('\n');

}
