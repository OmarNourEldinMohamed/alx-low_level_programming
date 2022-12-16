#include "main.h"

/**
 * print_diagonal - print diangonal
 * @n: input number
 * Return: void
 */

void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; c <= n; co++)
		{
			for (sp = 0; sp <= co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (co == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
