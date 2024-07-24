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

	if (format == NULL)
		return (0);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				int print = get_op_format(format[i + 1], args);

				if (print != 0)
					count += print;
				else if (print < 0)
					i++;
				else if (format[i + 1] == 's' && print == 0)
					i++;
				else
				{
					count += _putchar(format[i]);
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
	}
	va_end(args);

	return (count);
}
