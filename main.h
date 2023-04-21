#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_conversion(const char *format, int *i, va_list inputs);
int _print_str(va_list inputs);
int _print_int(va_list inputs);

#endif
