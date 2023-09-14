#include "calc.h"

/**
 * get_op_func - gets the function to execute the op
 * @s: the op
 * Return: NULL if not any of the ops otherwise a pointer
 * to the function of the op that takes two int inputs
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
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
