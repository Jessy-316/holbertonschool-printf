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
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (0);
	}
	else if (str[0] == '\0')
	{
		return (-1);
	}

	while (*str)
	{
		_putchar(*str++);
		count++;
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
