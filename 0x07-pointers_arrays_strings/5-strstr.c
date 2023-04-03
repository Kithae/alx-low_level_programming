#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: the substring
 * @needle: the string
* Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
char *firstocc, *findneedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			firstocc = haystack;
			findneedle = needle;
			while (*findneedle)
			{
				if (*haystack++ != *findneedle++)
					haystack = firstocc;
					break;
				}
			}
			if (firstocc != haystack)
				return (firstocc);
		}
		haystack++;
	}
	return (0)
}
