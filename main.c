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
	unsigned int ui, uj;
	int i = 21, j = -21;

	ui = (unsigned int)INT_MAX + 1024;
	uj = (unsigned int)56;

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
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned octal of 56:[%o]\n", uj);
        printf("Unsigned octal of 56:[%o]\n", uj);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Rev String:[%r]\n", "I am a string !");
	printf("Rot13 of \"I am a string !\":\n");
	_printf("%R\n", "I am a string !");
	_printf("Length:[%+d, %+i]\n", i, j);
	printf("Length:[%+d, %+i]\n", i, j);
	_printf("Space flag: [% d, % i]\n", i, j);
	printf("Space flag: [% d, % i]\n", i, j);
	_printf("Hash flag: [%#d, %#i]\n", i, j);
	printf("Hash flag: [%#d, %#i]\n", i, j);
	_printf("Multiple flags test: [%+#d, %+#d]\n", i, j);
	printf("Multiple flags: [%+#d, %+#d]\n", i, j);

	return (0);
}
