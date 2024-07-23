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

	return (0);
}
/**
 * _strlen - Calculates the length of the string.
 * @s: The stirng being measured.
 * Return: int (Success).
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
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
	size_t length;


	if (s == NULL)
	{
		return (write(1, "(null)", 6));
	}

	length = _strlen(s);

	if (length == 0)
	{
		return (0);
	}

	return (write(1, s, length));
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
