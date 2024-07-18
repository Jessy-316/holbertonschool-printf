#include "_printf.h"
/**
 * get_op_format - Connects to th ecorrect operating function.
 * @s: Operator passed as argument to the program.
 * @va_list: List of arguments.
 */
int get_op_format(char spec, va_list args)
/**
 */
int _printf(const char *format, ...)

{
	op_t ops[] = {
		{"c", _putchar},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL},
	};
	int i, count;

	for (i = 0, count = 0; ops[i].op != NULL; i++)
	{
		if (s[i] == ops[i].op)
		{
			count = _strlen(*s);
		}
		else
		{
			return NULL
		}
	}
	return (*ops[i].f);
}
