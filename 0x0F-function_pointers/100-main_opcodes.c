#include <stdio.h>
#include <stdlib.h>

/**
* main -  a program that prints the opcodes
* @argc: the total arguments
* @argv: an array
*
* Return: 1, else 2
*/
int main(int argc, char *argv[])
{
int bytes, a;
char *array;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

array = (char *)main;

for (a = 0; a < bytes; a++)
{
if (a == bytes - 1)
{
printf("%02hhx\n", arr[a]);
break;
}
printf("%02hhx ", arr[a]);
}
return (0);
}
