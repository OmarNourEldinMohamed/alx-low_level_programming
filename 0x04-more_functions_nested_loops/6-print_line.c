#include "main.h"

/**
 * print_line - printing line
 *
 */

void print_line(void)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
