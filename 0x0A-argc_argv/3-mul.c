#include <stdio.h>
#include <stdlib.h>

/**
* main – A program that multiplies two numbers.
* @argc: the argument count
* @argv: the arguments string
*
* Return: 1 on error, else the result
*/
int main(int argc, char **argv)
{
int a, b;

if (argc < 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);

return (0);
}
