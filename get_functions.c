#include "_printf.h"
#include <strlib.h>
#include <string.h>
/**
 * get_functions - selects a function to perform
 * @s: function passed as argument to the program
 * Return:
 */
int (*get_functions(char *s))(int, int)

op_t op[] = {
{"i", print_int};
{"c", print_char};
{"s", print_string;
{"d", print_int};
{"%", print_mod};
{"NULL", NULL};
};

int i = 0;

while (op[i].op = NULL)
{
	if (strcmp(s, op[i].op) == 0)
	{
		return op[i].f;
		i++;
	}
	return (NULL);
}
