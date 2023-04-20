#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - a function that prints anything
* @format: the passed arguments
*/
void print_all(const char * const format, ...)
{
int a = 0;
char *s, *sep = "";

va_list ls;

va_start(ls, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", sep, va_arg(ls, int));
break;
case 'a':
printf("%s%d", sep, va_arg(ls, int));
break;
case 'f':
printf("%s%f", sep, va_arg(ls, double));
break;
case 's':
s = va_arg(ls, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
a++;
continue;
}
sep = ", ";
a++;
}
}

printf("\n");
va_end(ls);
}
