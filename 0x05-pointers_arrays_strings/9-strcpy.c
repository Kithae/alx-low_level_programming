#include "main.h"
#include <stdio.h>

/**
**_strcpy - a function that copies the string pointed to by src,
*including the terminating null byte (\0),
*to the buffer pointed to by dest
*@dest: the buffer
*@src: the address
*Return: the string
*/

char *_strcpy(char *dest, char *src)
{

int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);

}
