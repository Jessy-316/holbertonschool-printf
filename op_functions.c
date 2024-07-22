#include "main.h"
/**
 * print_char - Prints a single character.
 * @args: va_list woth the character to print.
 * Return: Amount of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
/**
 * print_str - print a string
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;
	int i;

	if (s == NULL || s[0] == '\0')
	{
		return (count);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '%' && s[i + 1] == '%')
		{
			_putchar('%');
			i++;
			count++;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
/**
 * print_int - print a integer.
 * @args: integer recieved.
 *
 * Return: Number of printed characters.
 */
int print_int(va_list args)
{
	int i = va_arg(args, int);
	int temp, temp2;
	int zero = 1;
	int count = 0;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	if (i < 0)
	{
		_putchar('-');
		count++;
		temp = (-i);
	}
	temp2 = temp;
	while (temp2 > 9)
	{
		temp2 /= 10;
		zero *= 10;
	}

	while (zero >= 1)
	{
		count += _putchar(((temp / zero) % 10) + '0');
		zero /= 10;
	}

	return (count);
}
