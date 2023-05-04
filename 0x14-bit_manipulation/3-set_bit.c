#include "main.h"

/**
* set_bit - a function for setting bit value to 1
* @n: a pointer.
* @index: bit index.
*
* Return: 1 else, -1 on error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int a;

if (index > 63)
return (-1);

a = 1 << index;
*n = (*n | a);

return (1);
}
