#include "main.h"
#include <stdarg.h>

/**
 * _print_hex - prints number in hexadecimal format
 * @inputs: va_list inputs
 * Return: int (nr of chars printed)
 */

int _print_hex(va_list inputs)
{
	int number;
	int length = 0, j = 0, i, temp, counter = 0;
	char hex[100];

	number = va_arg(inputs, int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number)
	{
		temp = number % 16;

		/* conversion*/
		if (temp < 10)
			temp += 48;
		else
			temp += 55;

		length += 1;
		hex[j++] = temp;
		/*next digit*/
		number = number / 16;
	} /*while*/

	/*printing*/
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		counter++;
	}
	return (counter);

} /*_print_hex*/
