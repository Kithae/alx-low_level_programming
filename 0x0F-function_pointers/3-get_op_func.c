#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func – A function that selects the correct function to perform
* an operation asked by a user
* @s: The argument operator.
*
* Return: A pointer
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int a = 0;

while (ops[a].op != NULL && *(ops[a].op) != *s)
a++;

return (ops[a].f);
}
