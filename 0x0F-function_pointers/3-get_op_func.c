#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct functions to perform the operation
 * @s: the operator passed as argument
 *
 * Return: a pointer to the fucntion corresponding to the operator
 */
int (*get_op_function(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
