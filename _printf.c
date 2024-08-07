#include "main.h"
/**
 * _printf -  Printf made by us.
 * @format: Is a pointer to a constant character string.
 *
 * Return: Characters printed.
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				int print = get_op_format(format[i + 1], args);

				if (print == 0)
				{
					count += _putchar(format[i]);
				}
				else if (print < 0)
				{
					i++;
				}
				else
				{
					count += print;
					i++;
				}
			}
			else
			{
				count += _putchar(format[i]);
			}
		}
	}
	va_end(args);

	return (count);
}
