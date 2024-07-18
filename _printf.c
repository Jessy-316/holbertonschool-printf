#include "_printf.h"
/**
 * _printf -  Print ARGUMENT(s) according to FORMAT,
 * or execute according to OPTION.
 * @char format: Is a pointer to a constant character string.
 */
int _printf(char *format, ...)
{
	int i, count;
	int arg = 1;

	va_list();
	va_start(, s);

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == '%')
			{
				count = 0;
				count = (get_format(char c, char *s, va_list nombre));
				for (i = 0; nombre[i] != NULL; i++)
				{
					count = _strlen(*s);
					return (nombre[i].f);
				}
				for (j = 0; nombre2[j].nombre != NULL; J++)
					if (s[i] == (hold[j].nombre))
						count += nombre nombre2 .f;
			}
			else if
				(s[i] + s[i + 1] == '%')
					_putchar('%');
		}
	}
}
