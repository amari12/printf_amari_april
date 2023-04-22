#include "main.h"
#include <stdarg.h>

/**
 * handle_conversion - handles coversion specifiers and prints accordingly
 * @format: format string
 * @i: index
 * @inputs: va_list of inputs/arguments
 * Return: void for now
 */

int handle_conversion(const char *format, int *i, va_list inputs)
{
	int printed_chars = 0, nr; /*nr for print int*/
	char c;

	switch (format[*i])
	{
		case 'c':
			c = va_arg(inputs, int);
			_putchar(c);
			printed_chars++;
			break;
		case 's': /*ptr = va_arg(inputs, char);*/
			printed_chars += _print_str(inputs);
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
		case 'd':
		case 'i':
			nr = va_arg(inputs, int);
			printed_chars += _print_int(nr);
			break;
		case 'b':
			printed_chars += _print_bin(inputs);
			break;
		case 'x':
			printed_chars += _print_hex(inputs);
			break;
		case 'X':
			printed_chars += _print_hex(inputs);
			break;
		case 'o':
			printed_chars += _print_oct(inputs);
			break;
		case 'u':
			printed_chars += _print_ud(inputs);
			break;
		default: /*not followed by any of the above*/
			printed_chars += handle_conversion2(format, i, inputs);
			c = format[*i];
			_putchar('%');
			_putchar(c);
			printed_chars += 2;
			break;
	} /*switch*/
	return (printed_chars);
} /*handle_conversion*/

