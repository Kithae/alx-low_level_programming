#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - a function that prints anything
* @format: the passed arguments
*/
void print_all(const char * const format, ...)
{
Int a = 0;
char *str, *sep = "";

va_list anything;

va_start(anything, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", sep, va_arg(anything, int));
break;
case 'i':
printf("%s%d", sep, va_arg(anything, int));
break;
case 'f':
printf("%s%f", sep, va_arg(anything, double));
break;
case 's':
str = va_arg(anything, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
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
va_end(anything);
}
}
