#include "main.h"
#include <string.h>

/**
 * print_rev - This function prints a reverse
 *
 * @s: This is the ip string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	}
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar(('\n');
}
