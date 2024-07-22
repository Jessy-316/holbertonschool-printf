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

	if (s == NULL)
	{
		char *null_str = ("(null)");
		while (*null_str)
		{
			_putchar(*null_str++);
			count++;
		}
	}
	else if (s[0] == '\0')
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
	int n;
	unsigned int num, div, zeros = 1, len = 0;

	n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
		num = n;

	div = num;
	while (div > 9)
	{
		div /= 10;
		zeros *= 10;
	}
	while (zeros >= 1)
	{
		len += _putchar(((num / zeros) % 10) + '0');
		zeros = zeros / 10;
	}
	return (len);
}
