#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - print numbers without 2 and 4
*
*/
void print_most_numbers(void)
int num = 0;
while (num < 10)
{
if (num != 2 && num != 4)
putchar ('0' + num);
num++;
}
putchar('\n');

}
