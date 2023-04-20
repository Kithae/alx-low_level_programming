#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: The total passed parameters.
* @...: Sum variables
*
* Return: 0, else the sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list param;
unsigned int a, sum = 0;

va_start(param, n);

for (a = 0; a < n; a++)
sum += va_arg(param, int);

va_end(param);

return (sum);
}
