#include "main.h"

/**
 * swap_int - function that swaps the values of 2 ints
 * @a: This is the first entry
 * @b: This is the second entry
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
