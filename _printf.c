#include "_printf.h"
/**
 * _printf -  Printf made by us.
 * @format: Is a pointer to a constant character string.
 *
 * Return: Characters printed.
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list arguments;

	va_start(arguments, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				count += get_op_format(format[++i], arguments);
			}
			else
			{
				_putchar(format[i];
				count++;
			}
		}
	}

	va_end(arguments);

	return (count);
}
