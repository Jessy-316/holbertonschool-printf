#include "_printf.h"

/**
 * _putchar - print a character
 * @c: character
 *
 * return(0)
 */

int _putchar(char c)
{
	return write (1,&c,1);
}
/**
 * print_str - print a string
 * @s: _str
 *
 * return(0)
 */

int print_str(char *s)
{
	int i;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return(i);
}

/**
 * pirnt_int - print a integer
 *
 * return(0)
 */

int print_int(int i)
{
	int zeros;
	int temp;
	int count;

	zeros = 1;
	temp = i;

	if(i < 0)
	{
		count += _putchar('-');
		i = -i;
	}
	while(i > 9)
	{
		temp = temp / 10;
		zeros += 10;
	}
	while(zeros >= 1)
	{
		count += _putchar(((i / zero) % 10) + '0');
		zero / 10;
	}
	return(count);
}
