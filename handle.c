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
	int nr; /*for _print_int*/

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
	return (counter);
} /*_print_str*/

/**
 * _print_int - prints numbers
 * @inputs: va_list of arguments
 * Return: int (nr of chars printed)
 */

int _print_int(int nr)
{
	/*int nr = va_arg(inputs, int);*/ /*full number*/
	int counter, count = 0;
	int int_char; /*single digit to print using putchar*/
	int number = nr; /*going to change*/

	if (number < 0)
	{ /*if negative, change to positive and write -*/
		number = -number;
		_putchar('-');
	}

	if (number/10 != 0)
	{ /*go through number until end using recursion*/
		_print_int(number/10);
	}
	/*print digit when end of recursion is reached & traverse back*/
	int_char = number % 10;
	_putchar(int_char + '0');

	/*get length = nr of chars printed*/
        while (number > 0)
        {
                number = number/10;
                count++;
        }
        counter = count;
	
	return (counter);
} /*_print_int*/

/**
 * _print_bin - print number as binary
 * @inputs: inputs
 * Return: int (printed chars)
 */

int _print_bin(va_list inputs)
{
	int i, j, counter = 0;
	int binary[32];
	int number;

	number = va_arg(inputs, int);

	for (i = 0; number > 0; i++)
	{ /*convert to binary*/
		binary[i] = number % 2;
		number = number / 2;
	}
	
	_putchar(48); /*first 0*/

	for (j = i - 1; j >= 0; j--)
	{ /*print in reverse*/
		_putchar(binary[j] + '0');
		counter++;
	}
	return (counter);

} /*_print_bin*/
