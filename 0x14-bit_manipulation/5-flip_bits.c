#include "main.h"

/**
* flip_bits - a function for returning total bits required
* When flipping numbers
* @n: first number.
* @m: second number.
*
* Return: total bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int totalb;

for (totalb = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
totalb++;
}

return (totalb);
}
