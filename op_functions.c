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
 * print_char - Prints a single character.
 * @va_list: List of arguments.
 * @args: Amount of arguments.
 *
 * Return: 1.
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * _strlen - Finds the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
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
 * @args: strings given
 *
 * Return: the character on a string.
 */

int print_str(va_list args)
{
	char *s = va_arg(args, char*);
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
	int i;

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
