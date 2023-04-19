#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation requested by the user.
 * @s: the operator requested by the user.
 *
 * Return: a pointer to the function that will perform
 * the corresponding operation.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
if (*s == *(ops[i].op) && *(s + 1) == '\0')
return (ops[i].f);
i++;
}

return (NULL);
}
