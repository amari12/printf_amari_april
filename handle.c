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
	int printed_chars = 0;
	char c;

	switch (format[*i])
	{
		case 'c':
			c = va_arg(inputs, int);
			_putchar(c);
			printed_chars++;
			break;
		case 's':
			/*ptr = va_arg(inputs, char);*/
			printed_chars += _print_str(inputs);
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
		case 'd':
		case 'i':
			/*this is like using OR*/
			/*ptr = va_arg(inputs, int);*/
			printed_chars += _print_int(inputs);
			break;
		default:
			/*not followed by any of the above*/
			/*print the % and the next char (+2 chars printed)*/
			c = format[*i];
			_putchar('%');
			_putchar(c);
			printed_chars += 2;
			break;
	} /*switch*/
	return (printed_chars);
} /*handle_conversion*/

/**
 * _print_str - prints a string
 * @inputs: va_list of arguments
 * Return: int (nr of chars printed)
 */

int _print_str(va_list inputs)
{
	int counter = 0;
	int i;
	char *str = va_arg(inputs, char *); /*get string from va_list*/

	for (i = 0; str[i] != '\0'; i++)
	{ /*loop through str/inputs*/
		_putchar(str[i]); /*print value at address*/
		counter++; /*increase counter for each char printed*/
	} /*for*/
	_putchar('\n');
	return (counter);
} /*_print_str*/

/**
 * _print_int - prints numbers
 * @inputs: va_list of arguments
 * Return: int (nr of chars printed)
 */

int _print_int(va_list inputs)
{
	int nr = va_arg(inputs, int); /*full number*/
	int counter = 0;
	int int_char; /*single digit to print using putchar*/
	int number = nr; /*going to change*/

	while (number > 0)
	{
		int_char = number % 10; /*get the right-side digit*/
		_putchar(int_char + '0'); /*convert to ASCII +0*/
		number = number / 10; /*remove right-side digit*/
		counter++; /*increase counter for each digit*/
	} /*while*/
	_putchar('\n');
	return (counter);
} /*_print_int*/


