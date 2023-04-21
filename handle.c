#include "main.h"
#include <stdarg.h>

/**
 * handle_conversion - handles coversion specifiers and prints accordingly
 * @format: format string
 * @i: index
 * @inputs: va_list of inputs/arguments
 * Return: void for now
 */

void handle_conversion(const char *format, int *i, va_list inputs)
{
	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(inputs, char);
			printed_chars++;
			break;
		case 's':
			printed_chars += _print_str(va_args(inputs, char *));
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
		case 'd':
		case 'i':
			/*this is like using OR*/
			printed_chars += _print_int(va_args(args, int));
			break;
		default:
			/*not followed by any of the above*/
			/*print the % and the next char (+2 chars printed)*/
			_putchar('%');
			_putchar(format[i]);
			printed_chars += 2;
			break;
	} /*switch*/
} /*handle_converison*/
