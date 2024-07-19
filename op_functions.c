#include "_printf.h"
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

	if (s == NULL)
	{
		s = NULL;
	}

	while (*s)
	{
		_putchar(*s++);
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
	int i = va_arg(args, int);
	int temp = i;
	int count = 0;
	char buffer[12];
	char *str = buffer + sizeof(buffer) - 1;

	*str = '\0';

	if (i == 0)
	{
		_putchar('0');
		return 1;
	}

	if (i < 0)
	{
		_putchar('-');
		count++;
		temp = -temp;
	}

	while (temp > 0)
	{
		*--str = (temp % 10) + '0';
		temp /= 10;
	}

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

		return (count);

}
