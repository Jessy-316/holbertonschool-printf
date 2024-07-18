#include "_printf.h"
/**
 * get_op_format - Connects to the correct operating function.
 * @spec: Operator passed as argument to the program.
 * @va_list: List of arguments.
 *
 * Return: The correct operating function.
 */
int get_op_format(char spec, va_list args)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL},
	};
	int i, count;

	for (i = 0, count = 0; ops[i].op != NULL; i++)
	{
		if (ops[i].op == spec)
		{
			count = ops[i].f(args);
			break;
		}
	}
	return (count);
}
