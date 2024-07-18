#include "_printf.h"

/**
 * _putchar - print a character
 * @c: character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_str - print a string
 * @args: strings given
 *
 * Return: the character on a string.
 */

int print_str(va_list args)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_int - print a integer.
 * @args: integer recieved.
 *
 * Return: 0.
 */

int print_int(va_list args)
{
	int zeros;
	int temp;
	int count;

	zeros = 1;
	temp = i;

	if (i < 0)
	{
		count += _putchar('-');
		i = -i;
	}
	while (i > 9)
	{
		temp = temp / 10;
		zeros += 10;
	}
	while (zeros >= 1)
	{
		count += _putchar(((i / zeros) % 10) + '0');
		zeros / 10;
	}
	return (count);
}
