#include "main.h"

/**
* get_endianness - a function for checking endianness
*
* Return: 0 for endian big, else, 1
*/
int get_endianness(void)
{
unsigned int a = 1;
char *y;

y = (char *) &a;

return ((int)*y);
}
