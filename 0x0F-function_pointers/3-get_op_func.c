#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - get the function suitable for provided operator
 *
 * @s: operator passed as argument
 *
 * Return: pointer to suitable function
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
		if ((char)(*s) == (char)(*ops[i].op))
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
