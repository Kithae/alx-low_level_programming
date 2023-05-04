#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function for converting binary nnumbers
* to unsigned integers
* @b: a string pointer.
*
* Return: the resulting number, else 0.
*/
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int binNum =0;

if (b == 0)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
binNum <<= 1;
if (b[a] == '1')
binNum += 1;
}
return (binNum);
}
