#include "main.h"

/**
 * print_line - printing line
 * @n: input numbers
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 1; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
