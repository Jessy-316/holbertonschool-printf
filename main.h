#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct op_t - Structure for selecting the appropriate print function.
 * @op: The format specifier.
 * @f: Pointer to the function that handles the specific format.
 */
typedef struct op_t
{
char *op;
int (*f)(va_list);
} op_t;

int get_op_format(char spec, va_list args);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);
#endif /* MAIN_H*/
