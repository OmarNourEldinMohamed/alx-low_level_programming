#include "main.h"

/**
 * _puts - write a function that print a string
 * stdout.
 * @str: This is my input string
 */

void _puts(char *str)
{
	int index;

	for (; str[index] != '\0'; index++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
