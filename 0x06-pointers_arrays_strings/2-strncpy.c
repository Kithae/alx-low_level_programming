#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: The destination string
 * @src: The string to append (source)
 * @n: maximum space value
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
