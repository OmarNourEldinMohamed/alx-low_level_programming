#include "main.h"

/**
 * _puts - write a function that print a string
 * stdout.
 * @str: This is my input string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
