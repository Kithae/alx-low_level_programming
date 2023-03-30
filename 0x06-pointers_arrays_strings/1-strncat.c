#include "main.h"
/**
 * _strncat -  a function that concatenates two strings
 * @dest: The destination string
 * @src: The string to append (source)
 * @n: maximum space value
 *
 * Return: a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
