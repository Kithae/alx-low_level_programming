#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings.
* @separator: A printed string.
* @n: The total passed strings.
* @...: Sum variables.
*
* Description: Nil else don’t print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
char *s;
unsigned int index;

va_start(string, n);

for (index = 0; index < n; index++)
{
s = va_arg(string, char *);

if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(string);
}
