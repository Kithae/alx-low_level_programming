#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - a function that prints numbers.
* @separator: a string.
* @n: The total passed integers.
* @...: sum variables.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int index;

va_start(numbers, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(numbers, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(numbers);
}
