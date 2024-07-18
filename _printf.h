#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct op - structure with operations
 * @op: operator
 * @f: function associated with the operator
 */

typedef struct op
{
  char *op;
  int (*f)(...);
} op_t;

int _putchar(char c);
int _strlen(char *s);
int _mod(char c);
int _printf(const char *format, ...);

#endif
