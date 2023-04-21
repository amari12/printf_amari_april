#ifndef "MAIN_H"
#define "MAIN_H"

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void handle_conversion(const char *format, int *i, va_list inputs);

#endif
