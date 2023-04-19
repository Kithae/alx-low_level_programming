#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add – A program that sums two numbers.
* @a: 1st number.
* @b: 2nd number.
*
* Return: The sum
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub – A program that subtracts two numbers.
* @a: 1st number.
* @b: 2nd number.
*
* Return: The difference
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul – A program that multiplies two numbers.
* @a: 1st number.
* @b: 2nd number.
*
* Return: The product
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div – A program that divides two numbers.
* @a: 1st number.
* @b: 2nd number.
*
* Return: The division result
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod – a program that prints a  remainder
* @a: 1st number.
* @b: 2nd number.
*
* Return: The remainder
*/
int op_mod(int a, int b)
{
return (a % b);
}
