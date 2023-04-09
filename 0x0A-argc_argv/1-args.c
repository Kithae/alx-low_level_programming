#include <stdio.h>

/**
* main - a program that prints the number of arguments
* as passed into it.
* @argc: the argument count
* @argv: the arguments string
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
