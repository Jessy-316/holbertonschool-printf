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

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				count += get_op_format(format[i + 1], args);
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
