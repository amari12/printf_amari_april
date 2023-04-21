#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	printf("Binary:\n");
	_printf("Binary of 125: %b\n", 125);
	_printf("Binary of 65: %b\n", 65);
	_printf("Binary of 99: %b\n", 99);
	printf("Haxedecimal:\n");
	_printf("Hex of *: %x\n", '*');
	_printf("Hex of 8: %x\n", '8');
	_printf("Hex of q: %x\n", 'q');
	_printf("HEX of Q: %X\n", 'Q');
	_printf("HEX of 8: %X\n", '8');

	return (0);
}
