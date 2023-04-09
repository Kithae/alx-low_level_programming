#include <stdio.h>
#include <stdlib.h>

/**
* main – a program that adds positive numbers.
* @argc: the argument count
* @argv: the arguments string
*
* Return: the result, else 1 on error
*/
int main(int argc, char **argv)
{
int a, b, sum = 0;
char *flag;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (a = 1; argv[a]; a++)
{
b = strtol(argv[a], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += b;
}
}
printf("%d\n", sum);

return (0);
}
