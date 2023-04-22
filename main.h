#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/*task 4*/
#define BUFFER_SIZE 1024

/*in _printf.c*/
int _printf(const char *format, ...);
int _putchar(char c);
/*in handle.c*/
int handle_conversion(const char *format, int *i, va_list inputs);
int _print_str(va_list inputs);
int _print_int(int nr);
int _print_bin(va_list inputs);
/*in handle_task3.c*/
int _print_hex(va_list inputs);
int _print_oct(va_list inputs);
int _print_ud(va_list inputs);

#endif
