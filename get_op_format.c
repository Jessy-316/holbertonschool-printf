#include "_printf.h"
/**
 * get_op_format - Connects to the correct operating function.
 * @spec: Operator passed as argument to the program.
 * @args: List of arguments.
 *
 * Return: The correct operating function.
 */
int get_op_format(char spec, va_list args)
{
	int i, count = 0;

	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL},
	};
	if (spec == '%')
	{
		_putchar (spec);
		return (1);
	}
	else
	{
		for (i = 0; ops[i].op != NULL; i++)
		{
			if (ops[i].op[0] == spec)
			{
				count += ops[i].f(args);
				break;
			}
		}
	}
	return (count);
}
