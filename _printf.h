#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct op - Structure with operations.
 * @operator: Operator.
 * @f: Function associated with the operator.
 */

typedef struct op
{
char *op;
int (*f)(va_list);
} op_t;

int _putchar(char c);
int print_str(char *s);
int print_int(
int _printf(const char *format, ...);

#endif
