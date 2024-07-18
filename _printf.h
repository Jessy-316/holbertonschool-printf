#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct
{
char *op;
int (*f)(va_list);
} op_t;

int get_op_format(char spec, va_list args);
int _strlen(char *s);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);
#endif
